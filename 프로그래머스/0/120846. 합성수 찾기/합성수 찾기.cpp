#include <string>
#include <vector>

using namespace std;

int FindNumber(int Number)
{
    int Result = 2;
    for (int i = 2; i < Number; ++i)
    {
        if (0 == Number % i)
        {
            ++Result;
        }
    }
    return Result;
}

int solution(int n) 
{
    int answer = 0;
    
    for (int i = 1; i <= n; ++i)
    {
        if (FindNumber(i) >= 3)
        {
            ++answer;
        }
    }
    
    return answer;
}