#include <iostream>
#include <string>
#include <queue>

int Board[101][101];
bool Visited[101][101];
int Distance[101][101];

int DX[4] = { 1, 0, -1, 0 };
int DY[4] = { 0, 1, 0, -1 };

int MaxX = 0;
int MaxY = 0;

int main()
{
	std::cin >> MaxX >> MaxY;

	for (int i = 0; i < MaxX; ++i)
	{
		std::string Inputs;
		std::cin >> Inputs;

		for (int j = 0; j < MaxY; ++j)
		{
			Board[i][j] = Inputs[j] - '0';
		}
	}

	std::queue<std::pair<int, int>> Que;
	Que.push({ 0, 0 });
	Visited[0][0] = true;
	Distance[0][0];

	while (false == Que.empty())
	{
		std::pair<int, int> Current = Que.front();
		Que.pop();

		for (int i = 0; i < 4; ++i)
		{
			int NextX = Current.first + DX[i];
			int NextY = Current.second + DY[i];

			if (NextX < 0 || NextX >= MaxX || NextY < 0 || NextY >= MaxY)
			{
				continue;
			}
			if (true == Visited[NextX][NextY] || 1 != Board[NextX][NextY])
			{
				continue;
			}

			Que.push({ NextX, NextY });
			Visited[NextX][NextY] = true;
			Distance[NextX][NextY] = Distance[Current.first][Current.second] + 1;
		}
	}
	int Dist = Distance[MaxX - 1][MaxY - 1];
	std::cout << Dist + 1;

	return 0;
}