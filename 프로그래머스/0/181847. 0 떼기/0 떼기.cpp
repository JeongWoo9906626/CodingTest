#include <string>
#include <vector>
using namespace std;

string solution(string n_str) 
{
    string answer = "";
    
    bool Check = false;
    for (int i = 0; i < n_str.size(); ++i)
    {
        if ('0' == n_str[i])
        {
            if (Check == false)
            {
                if (n_str[i + 1] == '0')
                {
                    continue;
                }
                else
                {
                    Check = true;
                }
            }
            else
            {
                answer += n_str[i];
            }
        }
        else
        {
            if (Check == false)
            {
                Check = true;
            }
            answer += n_str[i];
        }
    }
    
    
    
    return answer;
}