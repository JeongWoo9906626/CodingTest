#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer = "";
    
    for (char& Alphabet : s)
    {
        Alphabet = std::tolower(Alphabet);
    }
    s[0] = std::toupper(s[0]);
    int Pos = s.find(" ");
    while (Pos != std::string::npos)
    {
        s[Pos + 1] = std::toupper(s[Pos + 1]);
        Pos = s.find(" ", Pos + 1);
    }
    
    answer = s;
    return answer;
}