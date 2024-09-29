#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) 
{
	int answer = 0;

	std::stringstream StringStream = std::stringstream(s);
	StringStream >> answer;
	int Temp = answer;
	bool Check = false;
	while (true != StringStream.eof())
	{
		int Number = 0;
		if (StringStream >> Number)
		{
			Temp = Number;
			answer += Number;
			Check = false;
		}
		else 
		{
			StringStream.clear();
			char ZOperator;
			StringStream >> ZOperator;
			if ('Z' == ZOperator && false == Check)
			{
				answer -= Temp;
				Check = true;
			}
		}
	}

	return answer;
}