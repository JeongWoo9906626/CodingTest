#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
    bool answer = true;
    
    int Sum = 0;
    std::string Number = std::to_string(x);
    for (char Num : Number)
    {
        Sum += static_cast<int>(Num - '0');
    }
    answer = x % Sum == 0;
    
    return answer;
}