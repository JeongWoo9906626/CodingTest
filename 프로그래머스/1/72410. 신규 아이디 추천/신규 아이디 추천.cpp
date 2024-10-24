#include <string>
#include <vector>

using namespace std;
std::string FindDot(const std::string& Id)
{
    std::string Result;
    bool IsDot = false;

    for (char Alphabet : Id) 
    {
        if (Alphabet == '.') 
        {
            if (false == IsDot) 
            {
                Result += Alphabet;
                IsDot = true; 
            }
        } 
        else 
        {
            Result += Alphabet;
            IsDot = false;
        }
    }
    return Result;
}

std::string solution(std::string new_id) 
{
    string answer = "";
    for (char& Alphabet : new_id)
    {
        Alphabet = std::tolower(Alphabet);
    }
  
    for (char& Alphabet : new_id)
    {
        if (Alphabet >= 'a' && Alphabet <= 'z')
        {
            answer += Alphabet;
        }
        else if (Alphabet >= '0' && Alphabet <= '9')
        {
            answer += Alphabet;
        }
        else if (Alphabet == '-' || Alphabet == '_' || Alphabet == '.')
        {
            answer += Alphabet;
        }
    }
   
    answer = FindDot(answer);
  
    if (false == answer.empty() && answer.front() == '.')
    {
        answer.erase(answer.begin());
    }
    if (false == answer.empty() && answer.back() == '.')
    {
        answer.erase(answer.end() - 1);
    }
    
    if (true == answer.empty())
    {
        answer += 'a';
    }
    if (answer.size() >= 16)
    {
        answer = answer.substr(0, 15);
    }
    if (answer.back() == '.')
    {
        answer.erase(answer.end() - 1);
    }
    while (answer.size() < 3)
    {
        answer += answer.back();
    }
    return answer;
}