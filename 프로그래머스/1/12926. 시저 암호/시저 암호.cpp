#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) 
{
    string answer = "";
    for (int i = 0; i < s.size(); ++i)
    {
        char Temp = s[i];
        if (Temp == ' ')
        {
            answer += ' ';
        }
        else if (Temp >= 'a' && Temp <= 'z')
        {
            int Check = Temp + n;
            if (Check > 'z')
            {
                Check = 'a' + (Check - 'z' - 1);
            }
            answer += Check;
        }
        else if (Temp >= 'A' && Temp <= 'Z')
        {
            char Check = Temp + n;
            if (Check > 'Z')
            {
                Check -= 26;
            }
            answer += Check;
        }
    }
    return answer;
}