#include <string>
#include <vector>
#include <cmath>

using namespace std;

int Divisor(int Number)
{
    int Count = 0;
    for(int i = 1; i <= std::sqrt(Number); ++i)
    {
        if (0 == Number % i)
        {
            ++Count;
            if (i != Number / i)
            {
                ++Count;
            }
        }
    }
    return Count;
}


int solution(int number, int limit, int power) 
{
    int answer = 0;
    
    for (int i = 1; i <= number; ++i)
    {
        int Count = Divisor(i);
        if (Count > limit)
        {
            Count = power;
        }
        answer += Count;
    }
    
    return answer;
}