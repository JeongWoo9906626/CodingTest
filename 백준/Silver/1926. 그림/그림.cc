#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

std::queue<std::pair<int, int>> Que;
std::vector<std::vector<int>> Graph;
std::vector<std::vector<bool>> Visited;
int CheckX[4] = { 1, 0, -1, 0 };
int CheckY[4] = { 0, 1, 0, -1 };
int n, m;

void BFS(int Y, int X, int& Width)
{
	Visited[Y][X] = true;
	Que.push(std::make_pair(Y, X));
	Width++;

	while (true != Que.empty())
	{
		Y = Que.front().first;
		X = Que.front().second;
		Que.pop();
		

		for (int i = 0; i < 4; i++)
		{
			int NextX = X + CheckX[i];
			int NextY = Y + CheckY[i];

			if (NextY < 0 || NextY >= n || NextX < 0 || NextX >= m)
			{
				continue;
			}
			if (1 == Graph[NextY][NextX] && false == Visited[NextY][NextX])
			{
				Visited[NextY][NextX] = true;
				Que.push(std::make_pair(NextY, NextX));
				Width++;
			}
		}
	}
}

int main()
{
	std::cin >> n;
	std::cin >> m;

	Graph.resize(n);
	Visited.resize(n);
	for (int Y = 0; Y < n; Y++)
	{
		Graph[Y].resize(m);
		Visited[Y].resize(m, false);
		for (int X = 0; X < m; X++)
		{
			std::cin >> Graph[Y][X];
		}
	}
	
	int Count = 0;
	int Width = 0;
	int MaxWidth = 0;

	for (int Y = 0; Y < n; Y++)
	{
		for (int X = 0; X < m; X++)
		{
			if (1 == Graph[Y][X] && false == Visited[Y][X])
			{
				Count++;
				Width = 0;
				BFS(Y, X, Width);
				MaxWidth = std::max(MaxWidth, Width);
			}
		}
	}

	std::cout << Count << std::endl;
	std::cout << MaxWidth << std::endl;

	return 0;
}