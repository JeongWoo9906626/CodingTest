#include <string>
#include <vector>

using namespace std;

int solution(int num) 
{
    int answer = -1;
    long long Temp = num;
    for (int i = 0; i < 500; ++i)
    {
        if (Temp == 1)
        {
            answer = i;
            break;
        }
        if (0 == Temp % 2)
        {
            Temp /= 2;
        }
        else
        {
            Temp = Temp * 3 + 1;
        }
    }
    
    return answer;
}