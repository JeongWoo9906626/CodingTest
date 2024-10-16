#include <string>
#include <vector>
#include <iostream>

using namespace std;

std::vector<int> solution(int brown, int yellow) 
{
    std::vector<int> answer;
    
    int Sum = brown + yellow;
    int X = 3;
    int Y = 0;
    while (true)
    {
        if (Sum % X == 0)
        {
            if (Sum / X <= X)
            {
                Y = Sum / X;
                if (yellow == (X - 2) * (Y - 2))
                {
                    break;
                }
            }
        }
        ++X;
    }
    answer.emplace_back(X);
    answer.emplace_back(Y);
    
    return answer;
}