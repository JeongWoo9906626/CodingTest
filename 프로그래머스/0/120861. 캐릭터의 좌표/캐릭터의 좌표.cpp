#include <string>
#include <vector>

using namespace std;
class Input
{
public:
	Input(int AbsX, int AbsY)
	{
		MaxX = AbsX;
		MinX = -AbsX;

		MaxY = AbsY;
		MinY = -AbsY;
	}

	bool MoveXCheck(int NextX)
	{
		if (NextX <= MaxX && NextX >= MinX)
		{
			return true;
		}
		return false;
	}
	bool MoveYCheck(int NextY)
	{
		if (NextY <= MaxY && NextY >= MinY)
		{
			return true;
		}
		return false;
	}

	void Move(char Dir, int Pos)
	{
		switch (Dir)
		{
		case 'U':
		case 'D':
		{
			int TempY = CurY + Pos;
			if (true == MoveYCheck(TempY))
			{
				CurY += Pos;
			}
		}
			break;
		case 'R':
		case 'L':
		{
			int TempX = CurX + Pos;
			if (true == MoveXCheck(TempX))
			{
				CurX += Pos;
			}
		}
			break;
		}
		
	}

	void Right()
	{
		Move('R', 1);
	}
	void Left()
	{
		Move('L', - 1);
	}
	void Up()
	{
		Move('U', 1);
	}
	void Down()
	{
		Move('D', -1);
	}

	std::pair<int, int> GetPos()
	{
		return std::make_pair(CurX, CurY);
	}

private:
	int MaxX = 0;
	int MinX = 0;
	
	int MaxY = 0;
	int MinY = 0;

	int CurX = 0;
	int CurY = 0;

};
vector<int> solution(vector<string> keyinput, vector<int> board) 
{
	std::vector<int> answer;

	int AbsX = board[0] / 2;
	int AbsY = board[1] / 2;

	Input Test = Input(AbsX, AbsY);
	for (std::string Dir : keyinput)
	{
		if ("right" == Dir)
		{
			Test.Right();
		}
		if ("left" == Dir)
		{
			Test.Left();
		}
		if ("up" == Dir)
		{
			Test.Up();
		}
		if ("down" == Dir)
		{
			Test.Down();
		}
	}

	std::pair<int, int> CurDir = Test.GetPos();
	answer.push_back(CurDir.first);
	answer.push_back(CurDir.second);

	return answer;
}