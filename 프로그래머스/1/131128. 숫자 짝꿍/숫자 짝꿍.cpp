#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::string solution(std::string X, std::string Y) 
{
	std::string answer = "";
	std::vector<int> CountX;
    CountX.resize(10, 0);
    std::vector<int> CountY;
    CountY.resize(10, 0);
	
    for (char Num : X)
    {
        CountX[Num - '0']++;
    }
    for (char Num : Y)
    {
        CountY[Num - '0']++;
    }
    
    std::string Temp = "";
    for (int i = 9; i >= 0; --i)
    {
        if (CountX[i] > 0 && CountY[i] > 0)
        {
            int Min = std::min(CountX[i], CountY[i]);
            Temp += std::string(Min, '0' + i);
        }
    }
    
    if (true == Temp.empty())
    {
        answer = "-1";
    }
    else if (Temp[0] == '0')
    {
        answer = "0";
    }
    else
    {
        answer = Temp;
    }

	return answer;
}