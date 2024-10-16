#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    std::vector<bool> IsPrime;
    IsPrime.resize(n + 1, true);
    IsPrime[0] = false;
    IsPrime[1] = false;

    for (int i = 2; i * i <= n; ++i) 
    {
        if (true == IsPrime[i]) 
        {
            for (int j = i * i; j <= n; j += i) 
            {
                IsPrime[j] = false;
            }
        }
    }
    
    for (bool Check : IsPrime)
    {
        if (true == Check)
        {
            ++answer;
        }
    }
    
    return answer;
}