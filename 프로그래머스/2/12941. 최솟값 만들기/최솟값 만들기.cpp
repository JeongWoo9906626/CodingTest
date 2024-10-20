#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    
    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end(), std::greater<int>());
    
    for (int i = 0; i < A.size(); ++i)
    {
        answer += A[i] * B[i];
    }
    
    
    return answer;
}