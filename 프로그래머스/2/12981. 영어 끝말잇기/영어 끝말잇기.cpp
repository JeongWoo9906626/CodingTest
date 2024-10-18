#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) 
{
    vector<int> answer;
    answer.resize(2, 0);
    char PrevEnd = words[0][words[0].size() - 1];
    char NextBegin;
    int Index = 0;
    bool Check = true;
    for (Index = 1; Index < words.size(); ++Index)
    {
        int Count = std::count(words.begin(), words.begin() + Index + 1, words[Index]);
        if (Count > 1)
        {
            Check = false;
            break;
        }
        NextBegin = words[Index][0];
        if (PrevEnd != NextBegin)
        {
            Check = false;
            break;
        }
        else
        {
            PrevEnd = words[Index][words[Index].size() - 1];
        }
    }
    
    if (false == Check)
    {
        answer[0] = Index % n + 1;
        answer[1] = Index / n + 1;
    }
    

    return answer;
}