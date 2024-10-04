#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) 
{
    vector<int> answer;
    for (int i = 0; i < my_string.size(); ++i)
    {
        int Temp = my_string[i] - '0';
        if (Temp >= 0 && Temp < 10)
        {
            answer.emplace_back(Temp);
        }
    }
    
    std::sort(answer.begin(), answer.end());
    
    return answer;
}