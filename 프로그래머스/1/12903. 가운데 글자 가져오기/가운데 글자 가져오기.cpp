#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer = "";
    int Len = s.size();
    
    if (0 != Len % 2)
    {
        answer = s[Len / 2];
    }
    else
    {
        answer += s[(Len / 2) - 1];
        answer += s[Len / 2];
    }
    
    return answer;
}