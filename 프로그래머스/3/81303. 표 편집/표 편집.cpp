#include <string>
#include <vector>
#include <stack>
using namespace std;

string solution(int n, int k, vector<string> cmd) 
{
    std::string answer;
    answer.resize(n, 'O');
    std::stack<int> Removed;
    std::vector<int> Up;
    std::vector<int> Down;
    
    for (int i = 0; i < n + 2; ++i)
    {
        Up.push_back(i - 1);
        Down.push_back(i + 1);
    }        
    Down[n - 1] = -1;
    
    int CurIndex = k;
    
    for (const std::string& Command : cmd)
    {
        if (Command[0] == 'U')
        {
            int X = std::stoi(Command.substr(2));
            for (int i = 0; i < X; ++i)
            {
                CurIndex = Up[CurIndex];
            }
        }
        else if (Command[0] == 'D')
        {
            int X = std::stoi(Command.substr(2));
            for (int i = 0; i < X; ++i)
            {
                CurIndex = Down[CurIndex];
            }
        }
        else if (Command[0] == 'C')
        {
            Removed.push(CurIndex);
            if (Up[CurIndex] != -1)
            {
                Down[Up[CurIndex]] = Down[CurIndex];
            }
            if (Down[CurIndex] != -1)
            {
                Up[Down[CurIndex]] = Up[CurIndex];
            }
            
            if (Down[CurIndex] != -1)
            {
                CurIndex = Down[CurIndex];
            }
            else
            {
                CurIndex = Up[CurIndex];
            }
        }
        else if (Command[0] == 'Z')
        {
            int Temp = Removed.top();
            Removed.pop();
            
            if (Up[Temp] != -1)
            {
                Down[Up[Temp]] = Temp;
            }
            if (Down[Temp] != -1)
            {
                Up[Down[Temp]] = Temp;
            }
        }
    }
    
    while (false == Removed.empty())
    {
        answer[Removed.top()] = 'X';
        Removed.pop();
    }
    return answer;
}