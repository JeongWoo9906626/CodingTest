#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) 
{
    vector<int> answer;
    
    for (const std::string& Word : strlist)
    {
        answer.push_back(Word.size());
    }
    
    return answer;
}