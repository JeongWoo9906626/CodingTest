#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::vector<int> solution(std::vector<int> arr, int divisor) 
{
    std::vector<int> answer;
    
    for (int Number : arr)
    {
        if (0 == (Number % divisor))
        {
            answer.push_back(Number);
        }
    }
    
    if (true == answer.empty())
    {
        answer.push_back(-1);
    }
    else
    {
        std::sort(answer.begin(), answer.end());
    }
    
    return answer;
}