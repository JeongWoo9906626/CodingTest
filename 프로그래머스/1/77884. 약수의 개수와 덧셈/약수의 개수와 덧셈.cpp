#include <string>
#include <vector>

using namespace std;

int DivisorCount(int Number)
{
    int Result = 0;
    for (int i = 1; i <= Number; ++i)
    {
        if (0 == Number % i)
        {
            ++Result;
        }
    }
    return Result;
}

int solution(int left, int right) 
{
    int answer = 0;
    
    for (int i = left; i <= right; ++i)
    {
        int Count = DivisorCount(i);
        if (0 == Count % 2)
        {
            answer += i;
        }
        else
        {
            answer -= i;
        }
    }
    
    return answer;
}