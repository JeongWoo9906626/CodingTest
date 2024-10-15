#include <string>
#include <vector>

using namespace std;

int solution(string num_str) 
{
    int answer = 0;
    
    for (char Number : num_str)
    {
        answer += Number - '0';
    }
    
    return answer;
}