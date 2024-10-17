#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::vector<int> solution(std::vector<int> num_list) 
{
    std::vector<int> answer;
    
    std::sort(num_list.begin(), num_list.end());
    for (int i = 0; i < 5; ++i)
    {
        answer.emplace_back(num_list[i]);
    }
    
    return answer;
}