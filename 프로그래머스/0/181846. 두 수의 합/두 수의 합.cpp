#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string a, string b) 
{
	std::string answer = "";
	std::vector<int> Temp;
	int LeftSize = a.size();
	int RightSize = b.size();

	std::reverse(a.begin(), a.end());
	std::reverse(b.begin(), b.end());
	if (RightSize > LeftSize)
	{
		std::swap(a, b);
		std::swap(LeftSize, RightSize);
	}
	
	for (int i = RightSize; i < LeftSize; ++i)
	{
		b += '0';
	}

	int Up = 0;
	for (int i = 0; i < LeftSize; ++i)
	{
		int Sum = a[i] - '0' + b[i] - '0' + Up;
		Up = Sum / 10;
		Temp.push_back(Sum % 10);
	}
	if (0 != Up)
	{
		Temp.push_back(Up);
	}

	for (int i = 0; i < Temp.size(); ++i)
	{
		answer += (Temp[i] + '0');
	}
	std::reverse(answer.begin(), answer.end());

	return answer;
}