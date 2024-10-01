#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    
    for (int i = 2; i < n; ++i)
    {
        if (1 == n % i)
        {
            answer = i;
            break;
        }
    }
    
    return answer;
}