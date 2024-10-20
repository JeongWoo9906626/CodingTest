#include <string>
#include <vector>

using namespace std;

string solution(string rsp) 
{
    string answer = "";
    
    // 가위 2 -> 0
    // 바위 0 -> 5
    // 보 5   -> 2
    
    for (char Cur : rsp)
    {
        if (Cur == '2')
        {
            answer += '0';
        }
        else if (Cur == '0')
        {
            answer += '5';
        }
        else
        {
            answer += '2';
        }
    }
    
    return answer;
}