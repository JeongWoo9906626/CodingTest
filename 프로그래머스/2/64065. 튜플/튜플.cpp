#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer;
    std::vector<std::set<int>> SetVec;
    std::set<int> CurSet;
    std::string Temp;
    
    for (int i = 1; i < s.size() - 1; ++i) 
    {
        if (true == std::isdigit(s[i])) 
        {
            Temp += s[i];
        } 
        else if (s[i] == ',' || s[i] == '}') 
        {
            if (false == Temp.empty()) 
            {
                CurSet.insert(std::stoi(Temp));
                Temp.clear();
            }
            if (s[i] == '}') 
            {
                SetVec.push_back(CurSet);
                CurSet.clear();
            }
        }
    }

  
    std::sort(SetVec.begin(), SetVec.end(), [](const std::set<int>& Left, const std::set<int>& Right) {
        return Left.size() < Right.size();
    });

    std::unordered_set<int> Finish;
    for (const std::set<int>& Set : SetVec) 
    {
        for (int Number : Set) 
        {
            if (Finish.find(Number) == Finish.end()) 
            {
                answer.push_back(Number);
                Finish.insert(Number);
                break;
            }
        }
    }
    
    return answer;
}