#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int order) 
{
    int answer = 0;
    
    std::string Number = std::to_string(order);
    answer += std::count(Number.begin(), Number.end(), '3');
    answer += std::count(Number.begin(), Number.end(), '6');
    answer += std::count(Number.begin(), Number.end(), '9');
    
    return answer;
}