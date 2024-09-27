#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long solution(string numbers) 
{
	long long answer = 0;

	std::vector<std::string> Numbers = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	std::vector<int> ResultVec;
	for (int i = 0; i < numbers.size();)
	{
		std::string First(1, numbers[i++]);
		std::string Second(1, numbers[i++]);
		std::string Thrid(1, numbers[i++]);
		std::string Temp = First + Second + Thrid;
		while (true)
		{
			std::vector<std::string>::iterator it = std::find(Numbers.begin(), Numbers.end(), Temp);
			if (it != Numbers.end())
			{
				int IndexNumber = std::distance(Numbers.begin(), it);
				ResultVec.push_back(IndexNumber);
				break;
			}
			std::string Check(1, numbers[i++]);
			Temp += Check;
		}
	}

	int Index = 0;
	for (int i = ResultVec.size() - 1; i >= 0; --i)
	{
		answer += (ResultVec[Index++] * std::pow(10, i));
	}

	return answer;
}