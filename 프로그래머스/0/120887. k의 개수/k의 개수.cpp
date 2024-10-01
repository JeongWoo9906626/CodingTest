#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int i, int j, int k) 
{
    int answer = 0;
    
    char CheckNumber = k + '0';
    for (int Index = i; Index <= j; ++Index)
    {
        std::string Temp = std::to_string(Index);
        answer += std::count(Temp.begin(), Temp.end(), CheckNumber);
    }
    
    return answer;
}