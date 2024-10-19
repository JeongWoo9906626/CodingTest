#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) 
{
    vector<int> answer;
    
    std::vector<int> Result;
    for (int Number : score)
    {
        Result.push_back(Number);
        
        std::sort(Result.begin(), Result.end(), std::greater<int>());
        if (Result.size() > k)
        {
            Result.pop_back();
        }
        answer.emplace_back(Result.back());
    }
        
    return answer;
}