#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void CheckDangerous(int y, int x, std::vector<std::vector<int>>& board)
{
	std::vector<std::pair<int, int>> CheckDir = { {-1, 0}, {1, 0}, {0, 1}, {0, -1}, {-1, -1}, {-1, 1}, {1, 1}, {1, -1} };
	for (std::pair<int, int> Check : CheckDir)
	{
		int CheckYIndex = y;
		int CheckXIndex = x;
		if (CheckYIndex + Check.first >= 0 && CheckYIndex + Check.first < board.size() && CheckXIndex + Check.second >= 0 && CheckXIndex + Check.second < board[0].size())
		{
			if (0 == board[y + Check.first][x + Check.second])
			{
				board[y + Check.first][x + Check.second] = 1;
			}
		}
	}
}
int solution(vector<vector<int>> board) 
{
    int answer = 0;

int Y = board.size();
int X = board[0].size();
std::vector<std::pair<int, int>> Check;
for (int i = 0; i < board.size(); ++i)
{
	std::vector<int>::iterator it = board[i].begin();
	while (it != board[i].end())
	{
		it = std::find(it, board[i].end(), 1);
		if (it != board[i].end())
		{
			int XIndex = std::distance(board[i].begin(), it);
			Check.push_back({ i, XIndex });
			++it;
		}
	}
}

for (std::pair<int, int> Temp : Check)
{
	CheckDangerous(Temp.first, Temp.second, board);
}

int Count = 0;

for (std::vector<int> Temp : board)
{
	Count += std::count(Temp.begin(), Temp.end(), 1);
}

answer = (Y * X) - Count;
return answer;
}