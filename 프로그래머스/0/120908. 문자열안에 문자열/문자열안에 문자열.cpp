#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2)
{
    int answer = 1;
    int Pos = str1.find(str2);
    if (Pos == std::string::npos)
    {
        answer = 2;
    }
    
    return answer;
}