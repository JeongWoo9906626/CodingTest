#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int age)
{
	std::string answer = "";
	std::string Age = std::to_string(age);
     
    for (int i = 0; i < Age.size(); ++i)
    {
        answer += static_cast<char>(Age[i] - '0' + static_cast<int>('a'));
    }
    
    
    return answer;
}