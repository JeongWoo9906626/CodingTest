#include <string>
#include <vector>

using namespace std;

int solution(string my_string) 
{
    int answer = 0;
    
    for (char Temp : my_string)
    {
        int Number = Temp - '0';
        if (Number >= 0 && Number < 10)
        {
            answer += Number;
        }
    }
    
    return answer;
}