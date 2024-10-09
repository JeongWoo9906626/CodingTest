#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> ingredient) 
{
	int answer = 0;
	std::vector<int> Order;

	for (int Num : ingredient)
	{
		Order.emplace_back(Num);

		if (Order.size() >= 4)
		{
			if (Order[Order.size() - 4] == 1 && Order[Order.size() - 3] == 2 && Order[Order.size() - 2] == 3 && Order[Order.size() - 1] == 1) 
			{
				Order.erase(Order.end() - 4, Order.end());
				answer++; 
			}
		}
	}

	return answer;
}