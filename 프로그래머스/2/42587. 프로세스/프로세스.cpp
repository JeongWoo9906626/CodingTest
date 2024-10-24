#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) 
{
    int answer = 0;
    
    std::queue<std::pair<int, int>> Order;
    std::priority_queue<int> Priority;
    
    for (int i = 0; i < priorities.size(); ++i)
    {
        Order.push({priorities[i], i});
        Priority.push(priorities[i]);
    }
    
    while (false == Order.empty())
    {
        int TempPriority = Order.front().first;
        int TempIndex = Order.front().second;
        Order.pop();
        
        if (TempPriority == Priority.top())
        {
            ++answer;
            Priority.pop();
            if (TempIndex == location)
            {
                return answer;
            }
        }
        else
        {
            Order.push({TempPriority, TempIndex});
        }
    }
    
    
    return -1;
}