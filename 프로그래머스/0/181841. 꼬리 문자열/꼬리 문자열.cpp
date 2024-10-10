#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) 
{
    string answer = "";
    
    for (std::string Word : str_list)
    {
        int Pos = Word.find(ex);
        if (Pos == std::string::npos)
        {
            answer += Word;
        }
    }
    
    return answer;
}