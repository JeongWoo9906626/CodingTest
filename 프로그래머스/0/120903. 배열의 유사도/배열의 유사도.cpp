#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> s1, vector<string> s2) 
{
    int answer = 0;
    
    for (const std::string& Find : s1)
    {
        std::vector<std::string>::iterator it = std::find(s2.begin(), s2.end(), Find);
        if (it != s2.end())
        {
            ++answer;
        }
    }
    
    return answer;
}