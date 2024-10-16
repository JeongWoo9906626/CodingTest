#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool PrimeCheck(int n)
{
    if (n <= 1) 
    {
        return false;
    }
    if (n == 2)
    {
        return true; 
    }
    if (n % 2 == 0)
    {
        return false;
    }
    
    for (int i = 3; i <= std::sqrt(n); i += 2) 
    {
        if (n % i == 0) 
        {
            return false;
        }
    }

    return true;
}

int solution(int n) {
    int answer = 0;
    
    for (int i = 2; i <= n; ++i)
    {
        bool Check = PrimeCheck(i);
        if (true == Check)
        {
            ++answer;
        }
    }
    
    return answer;
}