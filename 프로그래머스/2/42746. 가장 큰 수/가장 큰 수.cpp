#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    std::vector<std::string> NumberToString;
    for (int Number : numbers)
    {
        NumberToString.push_back(std::to_string(Number));
    }
    
    std::sort(NumberToString.begin(), NumberToString.end(), [](const std::string& Left, const std::string& Right)
              {
                  return Left + Right > Right + Left;
              });
    if (NumberToString[0] == "0") 
    {
        return "0";
    }
    for (const std::string& Number : NumberToString) 
    {
        answer += Number;
    }
    return answer;
}