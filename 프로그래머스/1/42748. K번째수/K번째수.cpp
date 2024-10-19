#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) 
{
    vector<int> answer;
    
    for (std::vector<int> Cmd : commands)
    {
        std::vector<int> Temp;
        int Begin = Cmd[0] - 1;
        int End = Cmd[1] - 1;
        int Index = Cmd[2] - 1;
        for (int i = Begin; i <= End; ++i)
        {
            Temp.emplace_back(array[i]);
        }
        std::sort(Temp.begin(), Temp.end());
        answer.emplace_back(Temp[Index]);
    }
    
    
    
    return answer;
}