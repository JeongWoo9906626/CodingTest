#include <string>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;

int solution(int x, int y, int n) 
{
    if (x == y)
    {
        return 0;
    }
    
    std::queue<std::pair<int, int>> Que;
    std::unordered_set<int> Visited;
    
    Que.push({x, 0});
    Visited.insert(x);
    
    while (false == Que.empty())
    {
        int Cur = Que.front().first;
        int Count = Que.front().second;
        Que.pop();
        
        int Next[3] = {Cur + n, Cur * 2, Cur * 3};
        
        for (int Temp : Next)
        {
            if (Temp == y)
            {
                return Count + 1;
            }
            
            if (Temp < y && Visited.find(Temp) == Visited.end())
            {
                Que.push({Temp, Count + 1});
                Visited.insert(Temp);
            }
        }
    }
    
    
    return -1;
}