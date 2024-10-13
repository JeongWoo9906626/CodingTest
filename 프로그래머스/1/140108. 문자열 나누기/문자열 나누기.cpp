#include <string>
#include <vector>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    char First;
    bool IsFirstCheck = false;
    int FirstCount = 0;
    int DiffCount = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (false == IsFirstCheck)
        {
            First = s[i];
            IsFirstCheck = true;
        }
        
        if (First != s[i])
        {
            ++DiffCount;
        }
        else
        {
            ++FirstCount;
        }
        if (FirstCount == DiffCount)
        {
            IsFirstCheck = false;
            
            ++answer;
        }
    }
    if (FirstCount != DiffCount)
    {
        ++answer;
    }
    
    return answer;
}