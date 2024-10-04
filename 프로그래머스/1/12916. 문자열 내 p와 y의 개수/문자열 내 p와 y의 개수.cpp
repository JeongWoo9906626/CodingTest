#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    int PCount = 0;
    int YCount = 0;
    
    for (int i = 0; i < s.size(); ++i)
    {
        if ('p' == s[i] || 'P' == s[i])
        {
            ++PCount;
        }
        if ('y' == s[i] || 'Y' == s[i])
        {
            ++YCount;
        }
    }
    
    answer = PCount == YCount;
    
    return answer;
}