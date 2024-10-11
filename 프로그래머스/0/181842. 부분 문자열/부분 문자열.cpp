#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2)
{
    int answer = 1;
    
    int Pos = str2.find(str1);
    if (Pos == std::string::npos)
    {
        answer = 0;
    }
    
    return answer;
}