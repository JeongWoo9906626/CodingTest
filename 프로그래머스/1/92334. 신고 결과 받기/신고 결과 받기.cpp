#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

std::vector<int> solution(std::vector<std::string> id_list, std::vector<std::string> report, int k) 
{
    std::vector<int> answer;
    answer.resize(id_list.size());
    std::unordered_map<std::string, int> IdPerIndex;
    std::unordered_map<std::string, std::unordered_set<int>> CountReport;
    for (int i = 0; i < id_list.size(); ++i)
    {
        IdPerIndex[id_list[i]] = i;
    }
    
    
    for (const std::string& Info : report)
    {
        int Pos = Info.find(" ");
        std::string Reporter = Info.substr(0, Pos);
        std::string Reported = Info.substr(Pos + 1);
        
        CountReport[Reported].insert(IdPerIndex[Reporter]);
    }
    
    for (const std::string& Name : id_list)
    {
        const std::unordered_set<int>& Temp = CountReport[Name];
        if (Temp.size() >= k)
        {
            for (int Number : Temp)
            {
                ++answer[Number];
            }
        }
    }
    
    return answer;
}