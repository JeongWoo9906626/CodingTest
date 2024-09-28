#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) 
{
	int answer = 0;

	std::stringstream Buf = std::stringstream(my_string);
	Buf >> answer;
	while (false != Buf.good())
	{
		std::string Operator = "";
		int Number;
		Buf >> Operator >> Number;
		if (Operator == "+")
		{
			answer += Number;
		}
		else
		{
			answer -= Number;
		}
	}
	
	return answer;
}