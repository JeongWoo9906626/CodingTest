#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int N, M;
int DX[4] = { 1, 0, -1, 0 };
int DY[4] = { 0, 1, 0, -1 };
int Room[8][8];
std::vector<std::pair<int, int>> Camera;
int Answer = INT_MAX;

void Check(int TempRoom[8][8], int X, int Y, int Dir)
{
    int CurrentX = X, CurrentY = Y;

    while (true)
    {
        CurrentX += DX[Dir];
        CurrentY += DY[Dir];

        if (CurrentX < 0 || CurrentX >= N || CurrentY < 0 || CurrentY >= M || TempRoom[CurrentX][CurrentY] == 6)
        {
            break;
        }
        if (TempRoom[CurrentX][CurrentY] == 0)
        {
            TempRoom[CurrentX][CurrentY] = -1;
        }
    }
}

void Copy(int Dest[8][8], int Src[8][8])
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            Dest[i][j] = Src[i][j];
        }
    }
}

void DFS(int Index, int TempRoom[8][8])
{
    if (Index == Camera.size())
    {
        int Count = 0;
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < M; ++j)
            {
                if (TempRoom[i][j] == 0)
                {
                    ++Count;
                }
            }
        }
        Answer = std::min(Answer, Count);
        return;
    }

    int X = Camera[Index].first;
    int Y = Camera[Index].second;
    int Type = Room[X][Y];

    for (int i = 0; i < 4; ++i)
    {
        int NewRoom[8][8];
        Copy(NewRoom, TempRoom);

        switch (Type) {
        case 1:
            Check(NewRoom, X, Y, i);
            break;
        case 2:
            Check(NewRoom, X, Y, i);
            Check(NewRoom, X, Y, (i + 2) % 4);
            break;
        case 3:
            Check(NewRoom, X, Y, i);
            Check(NewRoom, X, Y, (i + 1) % 4);
            break;
        case 4:
            Check(NewRoom, X, Y, i);
            Check(NewRoom, X, Y, (i + 1) % 4);
            Check(NewRoom, X, Y, (i + 2) % 4);
            break;
        case 5:
            for (int k = 0; k < 4; ++k)
            {
                Check(NewRoom, X, Y, k);
            }
            break;
        }

        DFS(Index + 1, NewRoom);
    }
}

int main()
{
    std::cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; ++j)
        {
            int Number;
            std::cin >> Number;
            Room[i][j] = Number;
            if (Number != 0 && Number != 6)
            {
                Camera.push_back({ i, j });
            }
        }
    }

    int CopyRoom[8][8];
    Copy(CopyRoom, Room);
    DFS(0, CopyRoom);
    std::cout << Answer;

    return 0;
}
