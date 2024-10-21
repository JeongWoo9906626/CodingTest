#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) 
{
    int answer = 0;
    std::sort(citations.begin(), citations.end(), std::greater<int>());
    
    int Index = 0;
    for (int i = 0; i < citations.size(); i++) 
    {
        if (citations[i] >= i + 1) 
        {
            Index = i + 1;
        } 
        else 
        {
            break;
        }
    }
    
    answer = Index;
    
    return answer;
}