#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) 
{
    vector<int> answer;
    
    std::vector<int> First = { 1, 2, 3, 4, 5 };
    int FirstLen = First.size();
    int FirstCount = 0;
    std::vector<int> Second = { 2, 1, 2, 3, 2, 4, 2, 5 };
    int SecondLen = Second.size();
    int SecondCount = 0;
    std::vector<int> Third = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    int ThirdLen = Third.size();
    int ThirdCount = 0;
    
    for (int i = 0; i < answers.size(); ++i)
    {
        if (answers[i] == First[i % FirstLen])
        {
            ++FirstCount;
        }
        if (answers[i] == Second[i % SecondLen])
        {
            ++SecondCount;
        }
        if (answers[i] == Third[i % ThirdLen])
        {
            ++ThirdCount;
        }
    }
    std::vector<int> Temp = { FirstCount, SecondCount, ThirdCount };
    int MaxNumber = *std::max_element(Temp.begin(), Temp.end());
    
    for (int i = 0; i < Temp.size(); ++i)
    {
        if (MaxNumber == Temp[i])
        {
            answer.emplace_back(i + 1);
        }
    }
    
    return answer;
}