#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) 
{
    int answer = 0;
    std::vector<bool> Check;
    Check.resize(10, false);
    
    for (int Number : numbers)
    {
        Check[Number] = true;
    }
    for (int i = 0; i < 10; ++i)
    {
        if (false == Check[i])
        {
            answer += i;
        }
    }
    
    return answer;
}