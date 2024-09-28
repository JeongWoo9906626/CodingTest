#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) 
{
	std::string answer = "";

	int Left = std::stoi(bin1, nullptr, 2);
	int Right = std::stoi(bin2, nullptr, 2);

	int Temp = Left + Right;

	while (Temp > 0)
	{
		answer = (Temp % 2 == 0 ? "0" : "1") + answer;
		Temp /= 2;
	}
	if (true == answer.empty())
	{
		answer = "0";
	}

	return answer;
}