#include <vector>
#include <iostream>
#include <set>
using namespace std;

bool PrimeNumberCheck(int n)
{
    bool Result = true;
    for (int i = 2; i < n; ++i)
    {
        if (0 == n % i)
        {
            Result = false;
            break;
        }
    }
    return Result;
}

int solution(vector<int> nums) {
    int answer = 0;
    
    for (int i = 0; i < nums.size() - 2; ++i) 
    {
        for (int j = i + 1; j < nums.size() - 1; ++j) 
        {
            for (int k = j + 1; k < nums.size(); ++k) 
            {
                bool Check = PrimeNumberCheck(nums[i] + nums[j] + nums[k]);
                if (true == Check)
                {
                    ++answer;
                }
            }
        }
    }

    return answer;
}