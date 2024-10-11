#include <string>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

std::vector<int> solution(std::string s) 
{
    std::vector<int> answer;
    int TransCount = 0;
    int RemoveCount = 0;

    while (s != "1") 
    {
        for (char Temp : s) 
        {
            if (Temp == '0') 
            {
                RemoveCount++;
            }
        }

        s.erase(remove(s.begin(), s.end(), '0'), s.end());

        int Len = s.size();
        s = bitset<32>(Len).to_string();

        s = s.substr(s.find('1'));
        TransCount++;
    }

    answer.emplace_back(TransCount);
    answer.emplace_back(RemoveCount);
    return answer;
}