#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    std::string Temp;
    while (n > 0)
    {
        Temp += std::to_string(n % 3);
        n /= 3;
    }
    
    int Count = Temp.size() - 1;
    for (char Number : Temp)
    {
        int Num = Number - '0';
        answer += Num * std::pow(3, Count);
        --Count;
    }
    
    return answer;
}