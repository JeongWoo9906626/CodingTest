#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) 
{
    std::vector<int> answer = arr;
    
    if (0 == arr.size() % 2)
    {
        for (int i = 1; i < arr.size(); i += 2)
        {
            answer[i] += n;
        }
    }
    else
    {
        for (int i = 0; i < arr.size(); i += 2)
        {
            answer[i] += n;
        }
    }
    
    return answer;
}