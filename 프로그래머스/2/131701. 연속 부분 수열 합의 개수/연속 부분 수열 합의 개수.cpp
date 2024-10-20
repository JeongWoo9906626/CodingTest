#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) 
{
    int answer = 0;
    
    int Len = elements.size();
    std::unordered_set<int> Sum;
    
    std::vector<int> Temp(elements.begin(), elements.end());
    Temp.insert(Temp.end(), elements.begin(), elements.end());
    
    for (int i = 1; i <= Len; ++i) 
    {
        int Cur = 0;
        
        for (int j = 0; j < i; ++j) 
        {
            Cur += Temp[j];
        }
        Sum.insert(Cur);
        
        for (int j = 1; j < Len; ++j)
        {
            Cur = Cur - Temp[j - 1] + Temp[j + i - 1];
            Sum.insert(Cur);
        }
    }
    
    answer = Sum.size();
    
    return answer;
}