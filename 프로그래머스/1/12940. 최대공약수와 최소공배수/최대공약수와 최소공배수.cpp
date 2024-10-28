#include <string>
#include <vector>

using namespace std;

int GCD(int A, int B)
{
    while (B != 0)
    {
        int Temp = A % B;
        A = B;
        B = Temp;
    }
    return A;
}

int LCM(int A, int B)
{
    return (A * B) / GCD(A, B);
}

vector<int> solution(int n, int m) 
{
    vector<int> answer;
    
    answer.push_back(GCD(n, m));
    answer.push_back(LCM(n, m));
    
    return answer;
}