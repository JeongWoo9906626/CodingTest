#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) 
{
    int answer = 0;
    
    std::unordered_map<int, int> Count;
    for (int Number : tangerine)
    {
        ++Count[Number];
    }
    std::vector<int> CountVec;
    for (std::pair<int, int> Temp : Count)
    {
        CountVec.emplace_back(Temp.second);
    }
    std::sort(CountVec.begin(), CountVec.end(), std::greater<int>());
    
    int Sum = 0;
    for (int Number : CountVec)
    {
        Sum += Number;
        ++answer;
        if (Sum >= k)
        {
            break;
        }
    }
    
    
    return answer;
}