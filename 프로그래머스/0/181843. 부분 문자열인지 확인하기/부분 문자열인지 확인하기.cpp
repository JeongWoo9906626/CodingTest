#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) 
{
    int answer = 0;
    
    int Pos = my_string.find(target);
    if (Pos != std::string::npos)
    {
        answer = 1;
    }
    
    return answer;
}