#include <string>
#include <vector>

using namespace std;

int solution(int n, std::vector<int> lost, std::vector<int> reserve) 
{
    int answer = 0;
    
    std::vector<int> Clothes;
    Clothes.resize(n, 1);
    
    for (int Index : lost)
    {
        --Clothes[Index - 1];
    }
    
    for (int Index : reserve)
    {
        ++Clothes[Index - 1];
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (0 == Clothes[i])
        {
            if (i - 1 >= 0 && Clothes[i - 1] == 2)
            {
                --Clothes[i - 1];
                ++Clothes[i];
            }
            else if (i + 1 < n && Clothes[i + 1] == 2)
            {
                --Clothes[i + 1];
                ++Clothes[i];
            }
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (Clothes[i] >= 1) 
        {
            ++answer;
        }
    }
    
    return answer;
}