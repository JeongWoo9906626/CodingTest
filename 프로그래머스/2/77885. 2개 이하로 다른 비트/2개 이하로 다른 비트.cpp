#include <string>
#include <vector>

using namespace std;

vector<long long> solution(vector<long long> numbers) 
{
    vector<long long> answer;
    
    for (long long Number : numbers)
    {
        if (0 == Number % 2)
        {
            answer.push_back(Number + 1);
        }
        else
        {
            long long BitMask = 1;
            while ((Number & BitMask) != 0) 
            {
                BitMask <<= 1;
            }
            answer.push_back((Number | BitMask) & ~(BitMask >> 1));
        }
    }
    
    
    return answer;
}