#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    int answer = 0;

    if (0 != a % 2 && 0 != b % 2)
    {
        answer = a * a + b * b;
    }
    else if (0 == a % 2 && 0 == b % 2)
    {
        answer = std::abs(a - b);
    }
    else
    {
        answer = 2 * (a + b);
    }
        
    return answer;
}