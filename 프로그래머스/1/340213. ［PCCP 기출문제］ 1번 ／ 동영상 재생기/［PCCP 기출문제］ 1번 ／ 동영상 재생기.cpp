#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::pair<int, int> OpeningStart;
std::pair<int, int> OpeningEnd;
std::pair<int, int> CurTime;
std::pair<int, int> EndTime;

std::pair<int, int> TimeSplit(std::string Time)
{
    std::pair<int, int> Result;
    int Minute = std::stoi(Time.substr(0, Time.find(':')));
    int Second = std::stoi(Time.substr(Time.find(':') + 1));
    Result = { Minute, Second };
    return Result;
}

void OpeningCheck()
{
    if (CurTime <= OpeningEnd && CurTime >= OpeningStart)
    {
        CurTime = OpeningEnd;
    }
}

void NextMove()
{
    if (CurTime.second >= 50)
    {
        ++CurTime.first;
        CurTime.second -= 60;
    }
    CurTime.second += 10;

    if (EndTime.first < CurTime.first)
    {
        CurTime.first = EndTime.first;
        CurTime.second = EndTime.second;
    }
    else if (EndTime.first == CurTime.first)
    {
        if (CurTime.second > EndTime.second)
        {
            CurTime.second = EndTime.second;
        }
    }
    OpeningCheck();
}

void PrevMove()
{
    if (CurTime.second < 10)
    {
        --CurTime.first;
        CurTime.second += 60;
    }
    CurTime.second -= 10;
    if (CurTime.first < 0)
    {
        CurTime.first = 0;
        CurTime.second = 0;
    }
    OpeningCheck();
}

std::string NumberToDigital(int Number)
{
    std::string Result;
    
    if (Number == 0)
    {
        Result = "00";
    }
    else if (Number < 10)
    {
        Result += "0";
        Result += std::to_string(Number);
    }
    else
    {
        Result = std::to_string(Number);
    }
    return Result;
}

std::string TimeToString(std::pair<int, int> Time)
{
    std::string Result;
    std::string Minute = NumberToDigital(Time.first);
    std::string Seconds = NumberToDigital(Time.second);
    Result = Minute + ":" + Seconds;
    return Result;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands)
{
    string answer = "";
    
    EndTime = TimeSplit(video_len);
    OpeningStart = TimeSplit(op_start);
    OpeningEnd = TimeSplit(op_end);
    CurTime = TimeSplit(pos);
    
    OpeningCheck();
    
    for (std::string CurCommand : commands)
    {
        if ("next" == CurCommand)
        {
            NextMove();
        }
        if ("prev" == CurCommand)
        {
            PrevMove();
        }
    }
 
    answer = TimeToString(CurTime);
    
    return answer;
}