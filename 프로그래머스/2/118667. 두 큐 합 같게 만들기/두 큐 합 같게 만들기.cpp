#include <string>
#include <vector>
#include <queue>
#include <numeric>
#include <algorithm>
using namespace std;

int solution(vector<int> queue1, vector<int> queue2) 
{
    int answer = -1;
    std::deque<long long> Deque1(queue1.begin(), queue1.end());
    std::deque<long long> Deque2(queue2.begin(), queue2.end());
    std::queue<long long> Left(Deque1);
    std::queue<long long> Right(Deque2);

    long long Sum1 = std::accumulate(queue1.begin(), queue1.end(), 0LL);
    long long Sum2 = std::accumulate(queue2.begin(), queue2.end(), 0LL);
    long long Sum = Sum1 + Sum2;
    
    if (Sum % 2 != 0) 
    {
        return answer;
    }
    
    long long target = Sum / 2;
    int maxOperations = queue1.size() * 3;
    int operations = 0;
    
    while (Sum1 != target && operations < maxOperations) 
    {
        if (Sum1 < target) 
        {
            long long Value = Right.front();
            Right.pop();
            Left.push(Value);
            Sum1 += Value;
            Sum2 -= Value;
        } 
        else 
        {
            long long Value = Left.front();
            Left.pop();
            Right.push(Value);
            Sum1 -= Value;
            Sum2 += Value;
        }
        ++operations;
    }
    
    answer = Sum1 == target ? operations : -1;
    
    return answer;
}