#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    std::stack<int> Temp;
    Temp.push(arr[0]);
    answer.push_back(arr[0]);
    for (int i = 1; i < arr.size(); ++i)
    {
        int Prev = Temp.top();
        if (Prev == arr[i])
        {
            continue;
        }
        else
        {
            Temp.push(arr[i]);
            answer.push_back(arr[i]);
        }
    }

    return answer;
}