#include <string>
#include <vector>

using namespace std;

int DPFunc(int n)
{
    int DP[60001];
    DP[1] = 1;
    DP[2] = 2;
   
    for (int i = 3; i <= n; ++i)
    {
        DP[i] = (DP[i - 1] + DP[i - 2]) % 1000000007;
    }
    return DP[n];
}

int solution(int n) 
{
    int answer = 0;

    answer = DPFunc(n);
    
    return answer;
}