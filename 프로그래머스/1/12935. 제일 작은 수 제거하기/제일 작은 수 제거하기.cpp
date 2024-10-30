#include <string>
#include <vector>
#include <algorithm>
using namespace std;

std::vector<int> solution(std::vector<int> arr) 
{
    std::vector<int> answer;
    int Min = *std::min_element(arr.begin(), arr.end());
    
    for (int Number : arr)
    {
        if (Min == Number)
        {
            continue;
        }
        answer.push_back(Number);
    }
    
    if (true == answer.empty())
    {
        answer.push_back(-1);
    }
    
    return answer;
}