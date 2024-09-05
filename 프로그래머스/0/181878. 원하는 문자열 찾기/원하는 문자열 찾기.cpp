#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat)
{
	int answer = 0;

	std::transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
	std::transform(pat.begin(), pat.end(), pat.begin(), ::tolower);

	if (std::string::npos != myString.find(pat))
	{
		answer = 1;
	}

	return answer;
}
