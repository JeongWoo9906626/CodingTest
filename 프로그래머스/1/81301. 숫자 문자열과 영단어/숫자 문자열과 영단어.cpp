#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
void MakeNumberMap(const std::vector<std::string>& NumberVec, std::unordered_map<std::string, std::string>& NumberMap)
{
    for (int i = 0; i < NumberVec.size(); ++i)
    {
        NumberMap.insert({ NumberVec[i], std::to_string(i) });
    }
}
void MakeNumberVec(std::vector<std::string>& NumberVec)
{
    NumberVec.resize(10);
    NumberVec[0] = "zero";
    NumberVec[1] = "one";
    NumberVec[2] = "two";
    NumberVec[3] = "three";
    NumberVec[4] = "four";
    NumberVec[5] = "five";
    NumberVec[6] = "six";
    NumberVec[7] = "seven";
    NumberVec[8] = "eight";
    NumberVec[9] = "nine";
}
int solution(string s) 
{
    int answer = 0;
    std::string NumberTemp;
    std::vector<std::string> NumberVec;
    MakeNumberVec(NumberVec);
    std::unordered_map<std::string, std::string> NumberMap;
    MakeNumberMap(NumberVec, NumberMap);
    
    for (int i = 0; i < s.size();)
{
    if (s[i] >= '0' && s[i] <= '9')
    {
        NumberTemp += s[i];
        ++i;
        continue;
    }
    else
    {
        for (const std::string& FindNumber : NumberVec)
        {
            int Size = FindNumber.size();
            std::string NumberToString = s.substr(i, Size);
            if (NumberToString == FindNumber)
            {
                i += Size;
                NumberTemp += NumberMap[NumberToString];
                break;
            }
        }
    }
}

    answer = std::stoi(NumberTemp);
    
    return answer;
}