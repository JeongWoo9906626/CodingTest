#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) 
{
    int answer = 0;
    
    std::vector<int>::iterator it = std::max_element(sides.begin(), sides.end());
    int MaxIndex = std::distance(sides.begin(), it);
    int MaxLen = sides[MaxIndex];
    
    int Sum = 0;
    for (int i = 0; i < 3; ++i)
    {
        if (i == MaxIndex)
        {
            continue;
        }
        Sum += sides[i];
    }
    
    answer = (MaxLen < Sum) ? 1 : 2;
    
    return answer;
}