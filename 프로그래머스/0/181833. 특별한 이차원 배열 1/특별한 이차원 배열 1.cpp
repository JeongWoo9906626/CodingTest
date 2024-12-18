#include <string>
#include <vector>

using namespace std;

std::vector<std::vector<int>> solution(int n) 
{
	std::vector<std::vector<int>> answer;
    answer.resize(n);
    for (int i = 0; i < n; ++i)
    {
        answer[i].resize(n);
    }
    
    for (int i = 0; i < n; ++i)
    {
        answer[i][i] = 1;
    }

	return answer;
}