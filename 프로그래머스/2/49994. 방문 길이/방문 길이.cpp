#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool CanNotMove(int x, int y)
{
	return x < 0 || x > 10 || y < 0 || y > 10;
}
int Opposite(int Check)
{
	return (Check + 2) % 4;
}
int solution(string dirs)
{
	int answer = 0;

	int dx[4] = { 0, 1, 0, -1 };
	int dy[4] = { -1, 0, 1, 0 };
	bool Path[11][11][4] = {false,};

	int X = 5;
	int Y = 5;

	for (char Dir : dirs)
	{
		int Check = 0;
		switch (Dir)
		{
		case 'U':
			Check = 0;
			break;
		case 'R':
			Check = 1;
			break;
		case 'D':
			Check = 2;
			break;
		case 'L':
			Check = 3;
			break;
		}

		int NextX = X + dx[Check];
		int NextY = Y + dy[Check];
		if (true == CanNotMove(NextX, NextY))
		{
			continue;
		}
		if (Path[Y][X][Check] == false)
		{
			Path[Y][X][Check] = true;
			Path[NextY][NextX][Opposite(Check)] = true;
			++answer;
		}
		X = NextX;
		Y = NextY;
	}

	return answer;
}