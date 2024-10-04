#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) 
{
    vector<int> answer;
    
    std::string Number = std::to_string(n);
    std::reverse(Number.begin(), Number.end());
    
    for (char Temp : Number)
    {
        answer.emplace_back(Temp - '0');
    }
    
    return answer;
}