#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool Compare(const std::string& Left, const std::string& Right, int Index)
{
    if (Left[Index] < Right[Index])
    {
        return true;
    }
    if (Left[Index] == Right[Index])
    {
        return Left < Right;
    }
    return false;
}

std::vector<string> solution(std::vector<std::string> strings, int n) 
{
    std::vector<std::string> answer;
    
    std::sort(strings.begin(), strings.end(), [n](const std::string& Left, const std::string& Right)
              {
                  return Compare(Left, Right, n);
              });
    answer = strings;
    return answer;
}