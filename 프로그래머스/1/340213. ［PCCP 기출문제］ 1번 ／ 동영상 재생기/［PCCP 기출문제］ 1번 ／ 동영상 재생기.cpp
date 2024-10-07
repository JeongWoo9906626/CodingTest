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
    CurTime.second += 10;
    CurTime.first += CurTime.second / 60;
    CurTime.second = CurTime.second % 60;
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
    std::string Minute;
    std::string Seconds;
    if (CurTime.first == 0)
    {
        Minute = "00";
    }
    else if (CurTime.first < 10)
    {
        Minute += "0";
        Minute += std::to_string(CurTime.first);
    }
    else
    {
        Minute = std::to_string(CurTime.first);
    }
    
    if (CurTime.second == 0)
    {
        Seconds = "00";
    }
    else if (CurTime.second < 10)
    {
        Seconds += "0";
        Seconds += std::to_string(CurTime.second);
    }
    else
    {
        Seconds += std::to_string(CurTime.second);
    }
 
    answer = Minute + ":" + Seconds;
    
    return answer;
}