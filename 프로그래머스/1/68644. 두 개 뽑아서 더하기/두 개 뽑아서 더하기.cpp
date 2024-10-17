#include <string>
#include <vector>
#include <set>

std::vector<int> solution(std::vector<int> numbers) 
{
    std::set<int> Temp;
    for (int i = 0; i < numbers.size() - 1; ++i)
    {
        for (int j = i + 1; j < numbers.size(); ++j)
        {
            Temp.insert(numbers[i] + numbers[j]);
        }
    }
    
    std::vector<int> Result(Temp.begin(), Temp.end());
    
    return Result;
}