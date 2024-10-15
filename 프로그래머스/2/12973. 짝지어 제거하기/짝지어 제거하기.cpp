#include <iostream>
#include<string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = -1;
    std::stack<char> Temp;
   
    for (int i = 0; i < s.size(); ++i)
    {
        if (false == Temp.empty() && Temp.top() == s[i])
        {
            Temp.pop();
        }
        else
        {
            Temp.push(s[i]);
        }
    }
    if (Temp.empty() == true)
    {
        answer = 1;
    }
    else
    {
        answer = 0;
    }

    return answer;
}