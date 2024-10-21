#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

void InterpretCommand(const std::string& Command, std::vector<std::string>& Result)
{
    Result.resize(3);
    std::string Cmd = Command;
    for (int i = 0; i < 2; ++i)
    {
        int Pos = Cmd.find(" ");
        Result[i] = Cmd.substr(0, Pos);
        Cmd = Cmd.substr(Pos + 1);
    }
    Result[2] = Cmd;
}

std::vector<std::string> solution(std::vector<std::string> record) 
{
    std::vector<std::string> answer;
    std::unordered_map<std::string, std::string> Check;
    std::vector<std::pair<std::string, std::string>> Outputs;
    
    for (std::string Command : record)
    {
        std::vector<std::string> Interpret;
        InterpretCommand(Command, Interpret);
        
        if (Interpret[0] == "Enter")
        {
            Check[Interpret[1]] = Interpret[2];
            Outputs.push_back({"Enter", Interpret[1]});
        }
        else if (Interpret[0] == "Leave")
        {
            Outputs.push_back({"Leave", Interpret[1]});
        }
        else if (Interpret[0] == "Change")
        {
            Check[Interpret[1]] = Interpret[2];
        }
    }
    
    for (std::pair<std::string, std::string> Temp : Outputs)
    {
        std::string Result = Check[Temp.second];
        if (Temp.first == "Enter")
        {
            Result += "님이 들어왔습니다.";
        }
        else
        {
            Result += "님이 나갔습니다.";
        }
        answer.push_back(Result);
    }
    
    
    return answer;
}