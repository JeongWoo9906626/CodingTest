#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string polynomial) 
{
	std::string answer = "";

	polynomial.erase(std::remove(polynomial.begin(), polynomial.end(), ' '), polynomial.end());
	std::vector<std::string> Substr;
	while (true)
	{
		int Pos = polynomial.find("+");
		if (Pos != std::string::npos)
		{
			std::string Temp = polynomial.substr(0, Pos);
			polynomial = polynomial.substr(Pos + 1);
			Substr.push_back(Temp);
		}
		else
		{
			Substr.push_back(polynomial);
			break;
		}
	}

	int FrontCount = 0;
	int BackCount = 0;
	for (std::string P : Substr)
	{
		if (std::string::npos != P.find('x'))
		{
			if (P[0] == 'x')
			{
				++FrontCount;
			}
			else
			{
				P.erase(P.find('x'));
                FrontCount += std::stoi(P);
			}
		}
		else
		{
			BackCount += std::stoi(P);
		}
	}

	std::string Front = "";
    std::string Back = "";
    if (0 != FrontCount)
    {
	    if (1 == FrontCount)
	    {
	    	Front += "x";
	    }
	    else
	    {
	    	Front += std::to_string(FrontCount) + "x";
	    }
    }
    if (0 != BackCount)
    {
	    Back += std::to_string(BackCount);
    }

    answer += Front;
    if (Back != "")
    {
	    if (Front == "")
    	{
		    answer += Back;
	    }
	    else
	    {
		    answer += " + " + Back;
	    }
    }

	return answer;
}