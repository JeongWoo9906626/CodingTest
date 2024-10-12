#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    
    for (int i = 1; i <= n; ++i)
    {
        int Sum = 0;

        for (int j = i; Sum < n; ++j)
        {
            Sum += j;
            if (Sum == n)
            {
                ++answer;
                break;
            }
        }
    }
    
    return answer;
}