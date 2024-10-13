#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) 
{
    vector<int> answer;
    
    int ZeroCount = std::count(lottos.begin(), lottos.end(), 0);
    int Min = 0;
    
    for (int Number : win_nums)
    {
        std::vector<int>::iterator it = std::find(lottos.begin(), lottos.end(), Number);
        if (it != lottos.end())
        {
            ++Min;
        }
    }
    
    int Max = ZeroCount + Min;
    
    if (Max < 2)
    {
        Max = 1;
    }
    if (Min < 2)
    {
        Min = 1;
    }
    
    answer.emplace_back(6 - Max + 1);
    answer.emplace_back(6 - Min + 1);
    
    return answer;
}