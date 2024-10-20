#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) 
{
    int answer = 0;
    std::unordered_map<std::string, int> Product;
    for (int i = 0; i < want.size(); ++i)
    {
        Product[want[i]] = number[i];
    }
    
    for (int i = 0; i <= discount.size() - 10; ++i)
    {
        std::unordered_map<std::string, int> Check;
        for (int j = i; j < i + 10; ++j)
        {
            ++Check[discount[j]];
        }
        bool Temp = true;
        for (std::pair<std::string, int> Want : Product)
        {
            if (Check[Want.first] != Want.second)
            {
                Temp = false;
                break;
            }
        }
        
        if (true == Temp)
        {
            ++answer;
        }
        
    }
    
    return answer;
}