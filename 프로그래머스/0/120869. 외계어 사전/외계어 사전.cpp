#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) 
{
	int answer = 2;
	
	std::sort(spell.begin(), spell.end());
	do
	{
		std::string Temp = "";
		for (int i = 0; i < spell.size(); ++i)
		{
			Temp += spell[i];
		}

		if (dic.end() != std::find(dic.begin(), dic.end(), Temp))
		{
			answer = 1;
			break;
		}
	} 
	while (std::next_permutation(spell.begin(), spell.end()));

	return answer;
}