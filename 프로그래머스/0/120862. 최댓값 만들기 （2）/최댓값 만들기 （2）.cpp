#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) 
{
    int answer = 0;
    
    std::sort(numbers.begin(), numbers.end());
    
    int MaxPlus = numbers[numbers.size() - 1] * numbers[numbers.size() - 2];
    int MaxMin = numbers[0] * numbers[1];
    
    answer = std::max(MaxPlus, MaxMin);
    
    return answer;
}