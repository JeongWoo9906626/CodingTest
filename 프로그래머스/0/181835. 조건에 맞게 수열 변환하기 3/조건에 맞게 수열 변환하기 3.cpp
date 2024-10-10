#include <string>
#include <vector>

using namespace std;

std::vector<int> solution(std::vector<int> arr, int k) 
{
    std::vector<int> answer;
    
    
    for (int Number : arr)
    {
        int Temp = Number;
        if (0 == k % 2)
        {
            Temp += k;
        }
        else
        {
            Temp *= k;
        }
        answer.emplace_back(Temp);
    }
    
    return answer;
}