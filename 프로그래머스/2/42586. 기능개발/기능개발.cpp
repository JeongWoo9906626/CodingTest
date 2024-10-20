#include <string>
#include <vector>
#include <queue>

using namespace std;

std::vector<int> solution(std::vector<int> progresses, std::vector<int> speeds) 
{
    std::vector<int> answer;
    std::queue<int> Progress;
    for (int Number : progresses)
    {
        Progress.push(Number);
    }
    std::queue<int> Speed;
    for (int Number : speeds)
    {
        Speed.push(Number);
    }
    
    while (false == Progress.empty())
    {
        int LeftProgress = 100 - Progress.front();
        int Day = LeftProgress / Speed.front();
        if (0 != LeftProgress % Speed.front())
        {
            ++Day;
        }
        
        int ClearCount = 0;
        bool IsClear = true;
        while (false == Progress.empty() && true == IsClear)
        {
            int CurProgress = Progress.front() + Speed.front() * Day;
            if (CurProgress >= 100)
            {
                Progress.pop();
                Speed.pop();
                ++ClearCount;
            }
            else
            {
                IsClear = false;
            }
        }
        if (ClearCount != 0)
        {
            answer.emplace_back(ClearCount);
        }
    }
    
    return answer;
}