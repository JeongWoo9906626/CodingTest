#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) 
{
    int answer = 2;
    int Number = static_cast<int>(std::sqrt(n));
    if (n == Number * Number)
    {
        answer = 1;
    }
    
    return answer;
}