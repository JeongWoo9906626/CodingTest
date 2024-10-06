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
    
    int Check = 0;
    for (int i = 0; i < answer.size(); ++i)
    {
        for (int j = 0; j < answer[i].size(); ++j)
        {
            if (Check == i && Check == j)
            {
                answer[i][j] = 1;
                ++Check;
            }
        }
    }

	return answer;
}