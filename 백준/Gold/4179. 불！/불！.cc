#include <iostream>
#include <queue>

int DX[4] = { 1, 0, -1, 0 };
int DY[4] = { 0, 1, 0, -1 };
int MaxX = 0;
int MaxY = 0;
char Board[1001][1001];
int MyDist[1001][1001];
int FireDist[1001][1001];

int main()
{
	std::cin >> MaxX >> MaxY;

	for (int i = 0; i < MaxX; ++i)
	{
		for (int j = 0; j < MaxY; ++j)
		{
			FireDist[i][j] = -1;
			MyDist[i][j] = -1;
		}
	}

	std::queue<std::pair<int, int>> MyQue;
	std::queue<std::pair<int, int>> FireQue;
	for (int i = 0; i < MaxX; ++i)
	{
		for (int j = 0; j < MaxY; ++j)
		{
			char Input;
			std::cin >> Input;
			Board[i][j] = Input;

			if (Input == 'J')
			{
				MyQue.push({ i, j });
				MyDist[i][j] = 0;
			}
			if (Input == 'F')
			{
				FireQue.push({ i, j });
				FireDist[i][j] = 0;
			}
		}
	}

	while (false == FireQue.empty())
	{
		std::pair<int, int> Current = FireQue.front();
		FireQue.pop();

		for (int i = 0; i < 4; ++i)
		{
			int NextX = Current.first + DX[i];
			int NextY = Current.second + DY[i];
			if (NextX < 0 || NextX >= MaxX || NextY < 0 || NextY >= MaxY)
			{
				continue;
			}
			if (FireDist[NextX][NextY] >= 0 || '#' == Board[NextX][NextY])
			{
				continue;
			}
			FireQue.push({ NextX, NextY });
			FireDist[NextX][NextY] = FireDist[Current.first][Current.second] + 1;
		}
	}

	while (false == MyQue.empty())
	{
		std::pair<int, int> Current = MyQue.front();
		MyQue.pop();

		for (int i = 0; i < 4; ++i)
		{
			int NextX = Current.first + DX[i];
			int NextY = Current.second + DY[i];
			if (NextX < 0 || NextX >= MaxX || NextY < 0 || NextY >= MaxY)
			{
				std::cout << MyDist[Current.first][Current.second] + 1;
				return 0;
			}
			if (MyDist[NextX][NextY] >= 0 || '#' == Board[NextX][NextY])
			{
				continue;
			}
			if (FireDist[NextX][NextY] != -1 && MyDist[Current.first][Current.second] + 1 >= FireDist[NextX][NextY])
			{
				continue;
			}
			MyQue.push({ NextX, NextY });
			MyDist[NextX][NextY] = MyDist[Current.first][Current.second] + 1;

		}
	}

	std::cout << "IMPOSSIBLE";

	return 0;
}