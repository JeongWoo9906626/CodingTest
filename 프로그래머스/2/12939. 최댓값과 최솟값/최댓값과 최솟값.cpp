#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) 
{
    string answer = "";
    std::vector<int> Number;
    // 공백을 기준으로 문자를 앞뒤로 나눔
    while (true)
    {
        size_t Pos = s.find(' ');
        if (Pos == std::string::npos)
        {
            Number.emplace_back(std::stoi(s));
            break;
        }
        string Temp = s.substr(0, Pos);
        s = s.substr(Pos + 1);
        Number.emplace_back(std::stoi(Temp));
    }
    
    std::sort(Number.begin(), Number.end());
    
    answer = std::to_string(Number[0]) + " " + std::to_string(Number[Number.size() - 1]);
    
    return answer;
}