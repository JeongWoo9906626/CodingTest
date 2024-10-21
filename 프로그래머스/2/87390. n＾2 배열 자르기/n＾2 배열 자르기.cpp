#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) 
{
    vector<int> answer;
    
    for (long long i = left; i <= right; ++i)
    {
        long long Row = i / n;
        long long Col = i % n;
        answer.push_back(std::max(Row, Col) + 1);
    }   
    
    return answer;
}