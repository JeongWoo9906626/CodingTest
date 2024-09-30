#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
	std::string answer = "";

	std::sort(s.begin(), s.end());
	for (char c : s)
	{
		if (1 == std::count(s.begin(), s.end(), c))
		{
			answer += c;
		}
	}

	return answer;
}