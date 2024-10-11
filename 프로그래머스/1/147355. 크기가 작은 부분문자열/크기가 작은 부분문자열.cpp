#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string t, string p) 
{
    int answer = 0;
    for(int i = 0; i <= t.size() - p.size(); i++) 
    {
        answer += (t.substr(i, p.size()) <= p); 
    }
    return answer;
}