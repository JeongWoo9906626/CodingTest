#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) 
{
    std::vector<int> answer;
	int mid = 0;
	if (num % 2 != 0)
	{
		mid = total / num;
	}
	else
	{
		mid = (total / num) + 1;
	}
	int start = mid - num / 2;

	for (int i = start; i < start + num; ++i)
	{
		answer.push_back(i);
	}

	return answer;
}