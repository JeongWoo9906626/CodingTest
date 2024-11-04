#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

std::vector<std::string> Change(const std::string& str) {
    std::vector<string> Result;
    for (int i = 0; i < str.size() - 1; ++i) {
        if (std::isalpha(str[i]) && std::isalpha(str[i + 1])) {
            std::string Temp = "";
            Temp += std::tolower(str[i]);
            Temp += std::tolower(str[i + 1]);
            Result.push_back(Temp);
        }
    }
    return Result;
}

int solution(string str1, string str2) 
{
    int answer = 0;
    std::vector<std::string> Left = Change(str1);
    std::vector<std::string> Right = Change(str2);
    std::unordered_map<std::string, int> LCount;
    std::unordered_map<std::string, int> RCount;
    
    for (const std::string& Set : Left)
    {
        ++LCount[Set];
    }
    for (const std::string& Set : Right)
    {
        ++RCount[Set];
    }
    
    int Intersect = 0;
    int Union = 0;
    for (const auto& [Key, Value] : LCount) 
    {
        int Temp = RCount[Key];
        Intersect += std::min(Value, Temp);
        Union += std::max(Value, Temp);
    }
    
    for (const auto& [Key, Value] : RCount) 
    {
        if (LCount.find(Key) == LCount.end()) 
        {
            Union += Value;
        }
    }
    
    if (Union == 0)
    {
        answer = 65536;
    }
    else
    {
        answer = static_cast<int>((static_cast<double>(Intersect) / Union) * 65536);    
    }
    
    return answer;
}