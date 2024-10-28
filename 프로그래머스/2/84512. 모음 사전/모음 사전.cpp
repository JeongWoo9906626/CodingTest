#include <string>
#include <vector>
#include <cmath>

using namespace std;

int Calculate(int Number)
{
    int Result = 0;
    for (int i = 0; i <= Number; i++) 
    {
        Result += std::pow(5, i);
    }
    return Result;
}

int solution(string word) 
{
    int answer = 0;    
    std::string Vowel = "AEIOU";

    for (int i = 0; i < word.size(); i++) 
    {
        int Index = Vowel.find(word[i]); 
        answer += Index * Calculate(4 - i) + 1;
    }

    return answer;
}