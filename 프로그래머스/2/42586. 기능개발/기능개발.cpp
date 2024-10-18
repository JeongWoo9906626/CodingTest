#include <string>
#include <vector>
#include <queue>

using namespace std;

std::vector<int> solution(std::vector<int> progresses, std::vector<int> speeds) 
{
    std::vector<int> answer;
    
    std::queue<int> Progress;
    for (int Temp : progresses)
    {
        Progress.push(Temp);
    }
    std::queue<int> Speed;
    for (int Temp : speeds)
    {
        Speed.push(Temp);
    }
    
    while (false == Progress.empty())
    {
        int Remain = 100 - Progress.front();
        int Day = static_cast<int>(Remain / Speed.front());
        if (Remain % Speed.front() != 0)
        {
            ++Day;
        }
        int Count = 0;
        while (false == Progress.empty() && Progress.front() + Speed.front() * Day >= 100)
        {
            Progress.pop();
            Speed.pop();
            ++Count;
        }
        answer.emplace_back(Count);
    }
    
    
    return answer;
}