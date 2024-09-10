#include <string>
#include <vector>
#include <set>

std::vector<int> solution(std::vector<int> numbers) 
{
    std::vector<int> answer;
    std::set<int> Temp;
    
    for (int i = 0; i < numbers.size() - 1; ++i)
    {
        for (int j = i + 1; j < numbers.size(); ++j)
        {
            Temp.insert(numbers[i] + numbers[j]);
        }
    }
    
    for (std::set<int>::iterator it = Temp.begin(); it != Temp.end(); ++it)
    {
        answer.emplace_back(*it);
    }
    
    return answer;
}