#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::string solution(std::vector<int> food) 
{
    std::string answer = "";
    std::string LeftFood = "";
    for (int i = 1; i < food.size(); ++i)
    {
        int Num = food[i];
        for (int Number = 0; Number < Num / 2; ++Number)
        {
            LeftFood += std::to_string(i);
        }
    }
    
    answer = LeftFood + "0";
    std::reverse(LeftFood.begin(), LeftFood.end());
    answer += LeftFood;
    
    return answer;
}