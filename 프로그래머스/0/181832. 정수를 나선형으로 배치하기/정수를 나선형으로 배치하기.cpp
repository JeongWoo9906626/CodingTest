#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int>> solution(int n) 
{
	std::vector<std::vector<int>> answer;
	answer.resize(n);

	std::vector<char> Dir = { 'R', 'D', 'L', 'U' };

	for (int i = 0; i < n; ++i)
	{
		answer[i].resize(n, 0);
	}
	answer[0][0] = 1;

	int Number = 1;
	int DirIndex = 0;

	int CurXIndex = 0;
	int CurYIndex = 0;

	int CheckXIndex = n - 1;
	int CheckYIndex = n - 1;

	while (true)
	{
		if (Number >= std::pow(n, 2))
		{
			break;
		}
		int TempX = 0;
		int TempY = 0;
		char CurDir = Dir[DirIndex];
		switch (CurDir)
		{
		case 'R':
			TempX = 1;
			break;
		case 'D':
			TempY = 1;
			break;
		case 'L':
			TempX = -1;
			break;
		case 'U':
			TempY = -1;
			break;
		}

		if (CurYIndex + TempY < n && CurYIndex + TempY >= 0)
		{
			CurYIndex += TempY;
		}
		else
		{
			++DirIndex;
			continue;
		}

		if (CurXIndex + TempX < n && CurXIndex + TempX >= 0)
		{
			CurXIndex += TempX;
		}
		else
		{
			++DirIndex;
			continue;
		}

		if (answer[CurYIndex][CurXIndex] != 0)
		{
			CurYIndex -= TempY;
			CurXIndex -= TempX;
			if (DirIndex == 3 && DirIndex >= 0)
			{
				DirIndex = 0;
			}
			else
			{
				++DirIndex;
			}
			continue;
		}

		answer[CurYIndex][CurXIndex] = ++Number;
	}

	return answer;
}