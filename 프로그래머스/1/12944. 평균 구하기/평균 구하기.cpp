#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr)
{
    double answer = 0;
    
    for (int Number : arr)
    {
        answer += Number;
    }
    
    answer /= arr.size();
    
    return answer;
}