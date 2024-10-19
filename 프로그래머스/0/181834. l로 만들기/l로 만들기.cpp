#include <string>
#include <vector>

using namespace std;

string solution(string myString) 
{
    string answer = myString;
    
    for (char& Alphabet : answer)
    {
        if (Alphabet < 'l')
        {
            Alphabet = 'l';
        }
    }
        
    return answer;
}