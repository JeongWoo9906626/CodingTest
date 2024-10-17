#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    int Count = 0;
    std::string Test = s;
    
    while (Count < s.size())
    {
        bool Check = true;
        std::stack<char> Temp;
        for (char Bracket : Test)
        {
            if (Bracket == '(' || Bracket == '{' || Bracket == '[')
            {
                Temp.push(Bracket);
            }
            else 
            {
                if (true == Temp.empty())
                {
                    Check = false;
                    break;
                }
                char Top = Temp.top();
                if ((Bracket == ')' && Top != '(') || (Bracket == '}' && Top != '{') || (Bracket == ']' && Top != '['))
                {
                    Check = false;
                    break;
                }
                Temp.pop();
            }
        }
        
        if (true == Check && true == Temp.empty())
        {
            ++answer;   
        }
                
        // 문자 이동
        char First = Test[0];
        Test = Test.substr(1) + First;
        
        // 횟수 더하기
        ++Count;
    }
    
    return answer;
}