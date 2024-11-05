#include <string>
#include <vector>

using namespace std;

string solution(string my_string) 
{
    string answer = "";
    
    for (const char& Alphabet : my_string)
    {
        if (Alphabet == 'a' || Alphabet == 'e' || Alphabet == 'i' || Alphabet == 'o' || Alphabet == 'u')
        {
            continue;
        }
        answer += Alphabet;
    }
    
    return answer;
}