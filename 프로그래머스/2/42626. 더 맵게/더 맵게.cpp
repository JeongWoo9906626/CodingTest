#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) 
{
    int answer = 0;
    
    std::priority_queue<int, std::vector<int>, std::greater<int>> Que(scoville.begin(), scoville.end());
    while (Que.size() > 1 && Que.top() < K)
    {
        int First = Que.top(); 
        Que.pop();
        int Second = Que.top(); 
        Que.pop();
        
        int New = First + Second * 2;
        Que.push(New);
        ++answer;
    }
    
    if (Que.top() < K)
    {
        answer = -1;
    }
    
    return answer;
}