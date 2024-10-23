#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

void Change(std::string& Word)
{
    for (int i = 0; i < Word.size(); i += 2)
    {
        Word[i] = std::toupper(Word[i]);
    }
}

string solution(string s)
{
    string answer = "";
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    int Pos = s.find(' ');
    while (Pos != std::string::npos)
    {
        std::string Temp = s.substr(0, Pos);
        s = s.substr(Pos + 1);
        Change(Temp);
        answer += Temp;
        answer += " ";
        Pos = s.find(' ');
    }
    Change(s);
    answer += s;
    
    return answer;
}