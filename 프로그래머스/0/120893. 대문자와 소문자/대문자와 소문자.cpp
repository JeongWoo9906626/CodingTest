#include <string>
#include <vector>

using namespace std;

string solution(std::string my_string) 
{
    std::string answer = my_string;
    
    for (char& Temp : answer)
    {
        if (Temp >= 'a' && Temp <= 'z')
        {
            Temp -= 32;
        }
        else
        {
            Temp += 32;
        }
    }
    
    return answer;
}