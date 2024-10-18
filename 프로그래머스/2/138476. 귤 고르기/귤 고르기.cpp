#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;

int solution(int k, vector<int> tangerine) 
{
    int answer = 0;
    
    std::unordered_map<int, int> Count;
    for (int Number : tangerine)
    {
        ++Count[Number];
    }
    std::priority_queue<int> MaxFirst;
    for (std::pair<int, int> Temp : Count)
    {
        MaxFirst.push(Temp.second);
    }
    
    int Sum = 0;
   
    while (Sum < k)
    {
        Sum += MaxFirst.top();
        MaxFirst.pop();
        ++answer;
    }
    
    
    return answer;
}