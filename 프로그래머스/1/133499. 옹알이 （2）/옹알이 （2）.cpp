#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) 
{
    int answer = 0;
    vector<string> CanSpeak = {"aya", "ye", "woo", "ma"};

    for (const string& Word : babbling) 
    {
        string Temp = Word;
        string Prev = "";
        bool IsValid = true;

        while (false == Temp.empty())
        {
            bool FoundWord = false;
            for (const string& Check : CanSpeak) 
            {
                if (Temp.find(Check) == 0) 
                {
                    if (Check == Prev) 
                    {
                        IsValid = false;
                        break;
                    }
                    Prev = Check;
                    Temp = Temp.substr(Check.length()); 
                    FoundWord = true;
                    break;
                }
            }
            if (false == FoundWord) 
            {
                IsValid = false; 
                break;
            }
        }

        if (true == IsValid)
        {
            ++answer;
        }
    }

    return answer;
}