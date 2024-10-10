#include <string>
#include <vector>
#include <map>

using namespace std;

std::map<char, int> CalcTerms(std::vector<std::string> terms)
{
    std::map<char, int> Result;
    for (std::string Contract : terms)
    {
        char Option = Contract[0];
        int Month = std::stoi(Contract.substr(2));
        Result.insert({Option, Month});
    }
    return Result;
}

std::string CalcDate(std::string Info, std::map<char, int> Contract)
{
    std::string Result = "";
    std::string Date = Info.substr(0, Info.size() - 2);
    char Option = Info[Info.size() - 1];

    int Year = std::stoi(Date.substr(0, 4));
    int Month = std::stoi(Date.substr(5, 2));

    Month += Contract[Option];
    if (Month > 12)
    {
        Year += (Month - 1) / 12;
        Month = (Month - 1) % 12 + 1;
    }
    std::string CalcYear = std::to_string(Year);
    std::string CalcMonth = Month < 10 ? "0" + std::to_string(Month) : std::to_string(Month);

    Result =  CalcYear + "." + CalcMonth + "." + Date.substr(8);
    return Result;
}

std::vector<int> solution(std::string today, std::vector<std::string> terms, std::vector<std::string> privacies) 
{
    std::vector<int> answer;
    std::map<char, int> Contract = CalcTerms(terms);
    int Index = 0;
    
    for (std::string Infos : privacies)
    {
        ++Index;
        std::string Date = CalcDate(Infos, Contract);
        if (today >= Date)
        {
            answer.emplace_back(Index);
        }
    }
    
    return answer;
}