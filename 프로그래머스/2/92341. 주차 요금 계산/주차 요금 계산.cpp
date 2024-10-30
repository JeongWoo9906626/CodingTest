#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) 
{
    vector<int> answer;
    std::map<std::string, std::vector<std::string>> List;
    
    int FirstTime = fees[0];
    int FirstFee = fees[1];
    int SecondTime = fees[2];
    int SecondFee = fees[3];
    
    for (const std::string& Record : records)
    {
        std::stringstream SS(Record);
        std::string Time;
        std::string Number;
        std::string IO;
        SS >> Time >> Number >> IO;
        
        List[Number].push_back(Time);
    }
    
    for (auto& Temp : List)
    {
        if (Temp.second.size() % 2 != 0)
        {
            Temp.second.push_back("23:59");
        }
    }
    
    for (auto& Temp : List)
    {
        std::vector<std::string> TimeList = Temp.second;
        int TotalTime = 0;
        for (int i = 0; i < TimeList.size(); i += 2)
        {
            int InHour = std::stoi(TimeList[i].substr(0, 2));
            int InMinute = std::stoi(TimeList[i].substr(3, 2));
            int InTime = 60 * InHour + InMinute;
            
            int OutHour = std::stoi(TimeList[i + 1].substr(0, 2));
            int OutMinute = std::stoi(TimeList[i + 1].substr(3, 2));
            int OutTime = 60 * OutHour + OutMinute;
            
            TotalTime += (OutTime - InTime);
        }
        if (TotalTime <= FirstTime)
        {
            answer.push_back(FirstFee);
        }
        else
        {
            int PlusTime = TotalTime - FirstTime;
            int PlusFee = std::ceil(static_cast<float>(PlusTime) / SecondTime) * SecondFee;
            answer.push_back(FirstFee + PlusFee);
        }
    }
    
    
    return answer;
}