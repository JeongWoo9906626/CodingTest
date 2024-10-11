#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(std::vector<int> num_list, int n) 
{
    int answer = 0;
    
    std::vector<int>::iterator it = std::find(num_list.begin(), num_list.end(), n);
    if (it != num_list.end())
    {
        answer = 1;
    }
    
    return answer;
}