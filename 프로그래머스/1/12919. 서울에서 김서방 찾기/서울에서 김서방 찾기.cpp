#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) 
{
    string answer = "김서방은 ";
    
    int Index = std::distance(seoul.begin(), std::find(seoul.begin(), seoul.end(), "Kim"));
    answer += std::to_string(Index);
    answer += "에 있다";
    
    return answer;
}