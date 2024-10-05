#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool SortCheck(const char& Left, const char& Right)
{
    return Left > Right;
}
long long solution(long long n) 
{
    long long answer = 0;
    
    std::string Temp = std::to_string(n);
    std::sort(Temp.begin(), Temp.end(), SortCheck);
    
    answer = std::stold(Temp);
    
    return answer;
}