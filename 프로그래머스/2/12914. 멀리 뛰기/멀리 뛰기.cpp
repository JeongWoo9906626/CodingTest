#include <string>
#include <vector>

using namespace std;

long long solution(int n) 
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    
    std::vector<int> Count;
    Count.resize(n + 1);
    Count[1] = 1;
    Count[2] = 2;
    
    for (int i = 3; i <= n; ++i)
    {
        Count[i] = Count[i - 1] % 1234567 + Count[i - 2] % 1234567;
    }
    
    return Count[n] % 1234567;
}