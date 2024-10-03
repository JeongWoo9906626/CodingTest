#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;
    std::string Number = std::to_string(n);
    
    for (char Temp : Number)
    {
        answer += Temp - '0';
    }
    
    return answer;
}