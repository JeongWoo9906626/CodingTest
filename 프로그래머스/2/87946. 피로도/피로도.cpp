#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) 
{
    int answer = -1;
    std::vector<int> Order;
    for (int i = 0; i < dungeons.size(); ++i)
    {
        Order.push_back(i);
    }
    
    while (std::next_permutation(Order.begin(), Order.end()))
    {
        int CureState = k;
        int Temp = 0;
        
        for (int i = 0; i < Order.size(); ++i) 
        {
            int RequireState = dungeons[Order[i]][0];
            int UseState = dungeons[Order[i]][1];
            
            if (CureState >= RequireState) 
            {
                CureState -= UseState;
                ++Temp;
            } 
            else 
            {
                break;
            }
        }
        
        answer = std::max(answer, Temp);
    }
    
    return answer;
}