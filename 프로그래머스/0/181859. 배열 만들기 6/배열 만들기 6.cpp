#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
	std::vector<int> answer;
	
	for (int i = 0; i < arr.size(); ++i)
	{
		if (true == answer.empty())
		{
			answer.push_back(arr[i]);
		}
		else
		{
			if (arr[i] == *(answer.end() - 1))
			{
				answer.erase(answer.end() - 1);
			}
			else
			{
				answer.push_back(arr[i]);
			}
		}
	}
    
    if (true == answer.empty())
    {
        answer.emplace_back(-1 );
    }

	return answer;
}