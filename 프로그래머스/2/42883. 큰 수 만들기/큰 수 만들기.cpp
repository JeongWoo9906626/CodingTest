#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(string number, int k) 
{
    string answer = "";
    stack<char> Stack;
    int Remove = k;

    for (char Num : number) 
    {
        while (false == Stack.empty() && Stack.top() < Num && Remove > 0) 
        {
            Stack.pop();
            --Remove;
        }
        Stack.push(Num);
    }

    while (Remove > 0) 
    {
        Stack.pop();
        --Remove;
    }

    while (false == Stack.empty()) 
    {
        answer = Stack.top() + answer;
        Stack.pop();
    }

    
    return answer;
}