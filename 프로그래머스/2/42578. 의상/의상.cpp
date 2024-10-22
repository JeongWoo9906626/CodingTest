#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int MakeCombination(std::unordered_map<std::string, std::vector<std::string>> Group)
{
    int Count = 1;
    for (const std::pair<std::string, std::vector<std::string>> Temp : Group)
    {
        Count *= (Temp.second.size() + 1);
    }
    return Count - 1;
}

int solution(vector<vector<string>> clothes) 
{
    int answer = 0;
    std::unordered_map<std::string, std::vector<std::string>> Group;
    
    for (std::vector<std::string> Clothe : clothes)
    {
        Group[Clothe[1]].push_back(Clothe[0]);
    }
    
    answer = MakeCombination(Group);
    
    return answer;
}