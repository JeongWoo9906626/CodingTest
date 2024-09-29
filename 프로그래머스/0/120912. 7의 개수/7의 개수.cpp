#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) 
{
	int answer = 0;

	for (int Number : array)
	{
		std::string Temp = std::to_string(Number);
		answer += std::count(Temp.begin(), Temp.end(), '7');
	}

	return answer;
}