#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes)
{
	std::vector<int> answer;

	int MaxX = park[0].size();
	int MaxY = park.size();

	int X = 0;
	int Y = 0;
	for (int i = 0; i < park.size(); ++i)
	{
		if (std::string::npos != park[i].find('S'))
		{
			Y = i;
			X = park[i].find('S');
			break;
		}
	}

	for (std::string Order : routes)
	{
		int CheckX = 0;
		int CheckY = 0;

		char Dir = Order[0];
		int Dist = std::atoi(&Order[2]);

		bool Check = true;

		switch (Dir)
		{
		case 'W':
			CheckX -= Dist;
			break;
		case 'E':
			CheckX += Dist;
			break;
		case 'N':
			CheckY -= Dist;
			break;
		case 'S':
			CheckY += Dist;
			break;
		}

		if (X + CheckX >= MaxX || Y + CheckY >= MaxY || X + CheckX < 0 || Y + CheckY < 0)
		{
			continue;
		}


		if (Dir == 'W' || Dir == 'E')
		{
			if (X + CheckX >= X)
			{
				for (int i = X; i <= X + CheckX; ++i)
				{
					if ('X' == park[Y][i])
					{
						Check = false;
						break;
					}
				}
			}
			else
			{
				for (int i = X + CheckX; i <= X; ++i)
				{
					if ('X' == park[Y][i])
					{
						Check = false;
						break;
					}
				}
			}
		}
		else
		{
			if (Y + CheckY >= Y)
			{
				for (int i = Y; i <= Y + CheckY; ++i)
				{
					if ('X' == park[i][X])
					{
						Check = false;
						break;
					}
				}
			}
			else
			{
				for (int i = Y + CheckY; i <= Y; ++i)
				{
					if ('X' == park[i][X])
					{
						Check = false;
						break;
					}
				}
			}
		}

		if (true == Check)
		{
			X += CheckX;
			Y += CheckY;
		}

	}

	answer.emplace_back(Y);
	answer.emplace_back(X);

	return answer;
}