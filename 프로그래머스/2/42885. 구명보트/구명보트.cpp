#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) 
{
    int answer = 0;
    
    std::sort(people.begin(), people.end());
    int Left = 0;
    int Right = people.size() - 1;
    std::vector<bool> Check;
    Check.resize(people.size(), false);
    while (Left < Right)
    {
        if (people[Left] + people[Right] <= limit)
        {
            Check[Left] = true;
            Check[Right] = true;
            ++answer;
            ++Left;
            --Right;
        }
        else
        {
            --Right;
        }
    }
    
    for (bool Temp : Check)
    {
        if(Temp == false)
        {
            ++answer;
        }
    }
    
    
    return answer;
}