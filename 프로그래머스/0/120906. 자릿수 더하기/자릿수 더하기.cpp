#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    std::string Number = std::to_string(n);
    
    for (const char& Temp : Number)
    {
        answer += (Temp - '0');
    }
    
    return answer;
}