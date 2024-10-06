#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::vector<int> solution(std::vector<int> arr, std::vector<int> delete_list) 
{
    std::vector<int> answer = arr;
    
    for (int i = 0; i < delete_list.size(); ++i)
    {
	    std::vector<int>::iterator it = std::find(answer.begin(), answer.end(), delete_list[i]);
	    if (it != answer.end())
	    {
            answer.erase(it);
	    }
    }
    
    return answer;
}