#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) 
{
    int answer = 0;
    
    bool IsXMinus = (dot[0] > 0) ? true : false;
    bool IsYMinus = (dot[1] > 0) ? true : false;
    
    if (IsXMinus == true && IsYMinus == true)
    {
        answer = 1;
    }
    else if (IsXMinus == true && IsYMinus == false)
    {
        answer = 4;
    }
    else if (IsXMinus == false && IsYMinus == true)
    {
        answer = 2;
    }
    else
    {
        answer = 3;
    }
    
    return answer;
}