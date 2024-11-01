#include <string>
#include <vector>

using namespace std;

string solution(int n) 
{
    string answer = "";
    
    for (int i = 1; i <= n; ++i)
    {
        if (0 == i % 2)
        {
            answer += "박";
        }
        else
        {
            answer += "수";
        }
    }
    
    return answer;
}