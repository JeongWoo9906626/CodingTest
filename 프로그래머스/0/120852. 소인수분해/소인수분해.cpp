#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) 
{
	std::vector<int> answer;
	std::vector<bool> Check;
	Check.resize(n + 1, false);
	while (0 == n % 2)
	{
		if (false == Check[2])
		{
			answer.push_back(2);
			Check[2] = true;
		}
		n /= 2;
	}

	for (int i = 3; i <= n; ++i)
	{
		while (0 == n % i)
		{
			if (false == Check[i])
			{
				answer.push_back(i);
				Check[i] = true;
			}
			n /= i;
		}
	}

	if (n > 2)
	{
		answer.push_back(n);
	}

	return answer;
}