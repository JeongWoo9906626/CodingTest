#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) 
{
    vector<int> answer;
    std::vector<int>::iterator it = std::max_element(array.begin(), array.end());
    answer.emplace_back(*it);
	answer.emplace_back(std::distance(array.begin(), it));
    
    return answer;
}