#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) 
{
	int answer = 0;
	for (int i = 0; i < myString.size(); ++i)
	{
		int FindIndex = myString.find(pat, i);
		if (FindIndex == i)
		{
			++answer;
		}
	}

	return answer;
}
