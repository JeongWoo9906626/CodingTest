#include<vector>
#include <queue>
using namespace std;

const int DirX[] = {-1, 0, 1, 0};
const int DirY[] = {0, 1, 0, -1};
const int MaxSize = 100;

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    int Height = maps.size();
    int Width = maps[0].size();
    
    std::vector<std::vector<int>> Visited;
    Visited.resize(MaxSize);
    for (int i = 0; i < MaxSize; ++i)
    {
        Visited[i].resize(MaxSize, 0);
    }
    std::queue<std::pair<int, int>> Que;
    Que.push({0, 0});
    Visited[0][0] = 1;
    
    while (false == Que.empty())
    {
        std::pair<int, int> CurPos = Que.front();
        Que.pop();
        
        for (int i =  0; i < 4; ++i)
        {
            std::pair<int, int> NextPos = {CurPos.first + DirX[i], CurPos.second + DirY[i]};
            
            if (NextPos.first >= 0 && NextPos.first < Height && NextPos.second >= 0 && NextPos.second < Width && maps[NextPos.first][NextPos.second] == 1 && Visited[NextPos.first][NextPos.second] == 0)
            {
                Visited[NextPos.first][NextPos.second] = Visited[CurPos.first][CurPos.second] + 1;
                Que.push({NextPos.first, NextPos.second});
            }
        }
    }
    std::pair<int, int> DestPos = {Height - 1, Width - 1};
    if (Visited[DestPos.first][DestPos.second] == 0)
    {
        answer = -1;
    }
    else
    {
        answer = Visited[DestPos.first][DestPos.second];
    }
    
    return answer;
}