#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) 
{
	std::string answer = "";
    int Index = 0;
	for (int i = 0; i < myString.size(); ++i)
	{
		std::string Temp = myString.substr(i, pat.size());
		if (Temp == pat)
		{
			Index = i + pat.size();
		}
	}
	answer = myString.substr(0, Index);
	return answer;
}
