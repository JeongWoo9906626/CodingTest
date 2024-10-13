#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

std::vector<int> solution(std::string s) 
{
    std::vector<int> answer;
    std::unordered_map<char, int> Check;
    for (int i = 0; i < s.size(); ++i)
    {
        char Temp = s[i];
        if (Check.find(Temp) != Check.end())
        {
            answer.emplace_back(i - Check[Temp]);
        }
        else
        {
            answer.emplace_back(-1);
        }
        Check[Temp] = i;
    }
    
    return answer;
}