#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) 
{
    int answer = 0;
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());
    
    answer = numbers[0] * numbers[1];
    
    return answer;
}