#include <string>
#include <vector>

using namespace std;
void DFS(const std::vector<int>& Number, int Target, int Index, int Sum, int& Count) 
{
    if (Index == Number.size()) 
    {
        if (Sum == Target)
        {
            Count++; 
        }
        return;
    }
    
    DFS(Number, Target, Index + 1, Sum + Number[Index], Count);
    DFS(Number, Target, Index + 1, Sum - Number[Index], Count);
}

int solution(vector<int> numbers, int target) 
{
    int answer = 0;
    DFS(numbers, target, 0, 0, answer);
    return answer;
}