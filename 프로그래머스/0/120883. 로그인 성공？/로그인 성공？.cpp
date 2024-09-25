#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) 
{
	std::string answer = "fail";

	std::string ID = id_pw[0];
	std::string PW = id_pw[1];

	for (std::vector<std::string> Check : db)
	{
		if (ID == Check[0])
		{
			if (PW == Check[1])
			{
				answer = "login";
			}
			else
			{
				answer = "wrong pw";
			}
		}
	}

	return answer;
}