#include<string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(std::string s)
{
	bool answer = true;
    
    int Count = 0;
    for (char Bracket : s)
    {
        if (Bracket == '(')
        {
            ++Count;
        }
        if (Bracket == ')')
        {
            --Count;
        }
        if (Count < 0)
        {
            return false;
        }
    }
    if (Count != 0)
    {
        return false;
    }
        
	return answer;
}