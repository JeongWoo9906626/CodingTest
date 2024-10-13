#include <string>
#include <vector>

using namespace std;

int OneCount(int n)
{
    int Count = 0;
    while (n > 0)
    {
        if (1 == n % 2)
        {
            ++Count;
        }
        n /= 2;
    }
    return Count;
}

int solution(int n) 
{
    int answer = 0;
    int FirstOneCount = OneCount(n);
    int Next = n + 1;
    
    while (OneCount(Next) != FirstOneCount)
    {
        ++Next;
    }
    answer = Next;
    return answer;
}