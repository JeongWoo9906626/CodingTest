#include <string>
#include <vector>
#include <cmath>
using namespace std;

int GetScore(const std::string& Result, int& Index)
{
    int Score = 0;
    if (Index + 1 < Result.size() && Result[Index] == '1' && Result[Index + 1] == '0')
    {
        Score = 10;
        ++Index;
    }
    else
    {
        Score = Result[Index] - '0';
    }
    return Score;
}

int solution(string dartResult) 
{
    int answer = 0;
    std::vector<int> Score;
    Score.resize(3, 0);
    
    int Index = -1;
    for (int i = 0; i < dartResult.size(); ++i)
    {
        char Temp = dartResult[i];
        
        if (true == std::isdigit(Temp)) 
        {
            Index++;
            Score[Index] = GetScore(dartResult, i);
            continue;
        }
        
        switch(Temp)
        {
            case 'S':
                Score[Index] = std::pow(Score[Index], 1);
                break;
            case 'D':
                Score[Index] = std::pow(Score[Index], 2);
                break;
            case 'T':
                Score[Index] = std::pow(Score[Index], 3);
                break;
            case '*':
                if (Index > 0)
                {
                    Score[Index - 1] *= 2;
                }
                Score[Index] *= 2;
                break;
            case '#':
                Score[Index] *= -1;
                break;
        }
    }
    
    for (int Number : Score)
    {
        answer += Number;
    }
    
    return answer;
}