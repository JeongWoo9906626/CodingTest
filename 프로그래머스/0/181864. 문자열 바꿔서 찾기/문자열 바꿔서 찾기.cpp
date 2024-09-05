#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat)
{
	int answer = 0;

	for (int i = 0; i < myString.size(); ++i)
	{
		if ('A' == myString[i])
		{
			myString[i] = 'B';
		}
		else
		{
			myString[i] = 'A';
		}
	}

	if (std::string::npos != myString.find(pat))
	{
		answer = 1;
	}

	return answer;
}