#include <string>
#include <vector>

using namespace std;

int Fibo(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    std::vector<int> F;
    F.resize(n + 1);
    F[0] = 0;
    F[1] = 1;

    for (int i = 2; i <= n; ++i) 
    {
        F[i] = (F[i - 1] + F[i - 2]) % 1234567; 
    }

    return F[n]; 
}

int solution(int n) 
{
    int answer = 0;
    
    answer = Fibo(n);
    
    return answer;
}