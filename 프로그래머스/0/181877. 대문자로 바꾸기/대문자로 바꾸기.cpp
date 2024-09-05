#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string myString) 
{
	std::string answer = myString;

	std::transform(answer.begin(), answer.end(), answer.begin(), ::toupper);

	return answer;
}
