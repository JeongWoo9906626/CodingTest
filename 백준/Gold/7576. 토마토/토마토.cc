#include <iostream>
#include <queue>

int Board[1001][1001];
bool Visited[1001][1001];
int Distance[1001][1001];

int MaxX = 0;
int MaxY = 0;

int DX[4] = { 1, 0, -1, 0 };
int DY[4] = { 0, 1, 0, -1 };

int main()
{
	std::cin >> MaxY >> MaxX;

	std::queue<std::pair<int, int>> Que;
	for (int i = 0; i < MaxX; ++i)
	{
		for (int j = 0; j < MaxY; ++j)
		{
			int Number = 0;
			std::cin >> Number;
			if (Number == 1)
			{
				Que.push({ i, j });
				Visited[i][j] = true;
				Distance[i][j] = 0;
			}
			Board[i][j] = Number;
		}
	}

	while (false == Que.empty())
	{
		std::pair<int, int> Current = Que.front();
		Que.pop();

		for (int i = 0; i < 4; ++i)
		{
			int NewX = Current.first + DX[i];
			int NewY = Current.second + DY[i];

			if (NewX < 0 || NewX >= MaxX || NewY < 0 || NewY >= MaxY)
			{
				continue;
			}
			if (0 != Board[NewX][NewY] || true == Visited[NewX][NewY])
			{
				continue;
			}

			Board[NewX][NewY] = 1;
			Distance[NewX][NewY] = Distance[Current.first][Current.second] + 1;
			Que.push({ NewX, NewY });
			Visited[NewX][NewY] = true;
		}
	}

	int answer = 0;
	for (int i = 0; i < MaxX; ++i)
	{
		for (int j = 0; j < MaxY; ++j)
		{
			if (Board[i][j] == 0)
			{
				std::cout << -1;
				return 0;
			}
			answer = std::max(answer, Distance[i][j]);
		}
	}
	std::cout << answer;
	return 0;
}