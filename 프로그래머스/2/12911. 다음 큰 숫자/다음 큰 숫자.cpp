#include <string>
#include <vector>
#include <bitset>

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
    int FirstOneCount = std::bitset<32>(n).count();
    
    while (std::bitset<32>(++n).count() != FirstOneCount)
    {
    }
    answer = n;
    return answer;
}