#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
#include <sstream>

using namespace std;
std::vector<int> solution(std::vector<std::string> operations) 
{
	std::vector<int> answer(2, 0);
	std::priority_queue<int> Queue;

	for (const std::string& Command : operations)
	{
		std::stringstream SS(Command);
		std::string Type;
		std::string Number;
		SS >> Type >> Number;
		int Order = std::stoi(Number);

		if (Type == "I")
		{
			Queue.push(Order);
		}
		else
		{
			if (Order == 1)
			{
				if (false == Queue.empty())
				{
					Queue.pop();
				}
			}
			else
			{
				if (false == Queue.empty())
				{
					std::vector<int> Temp;
					int Min = Queue.top();
					while (false == Queue.empty())
					{
						Min = std::min(Min, Queue.top());
						Temp.push_back(Queue.top());
						Queue.pop();
					}

					for (int Number : Temp)
					{
						if (Min != Number)
						{
							Queue.push(Number);
						}
					}
				}
			}
		}
	}

	if (false == Queue.empty())
	{
		answer[0] = Queue.top();

		int Min = Queue.top();
		while (false == Queue.empty())
		{
			Min = std::min(Min, Queue.top());
            Queue.pop();
		}
		answer[1] = Min;
	}


	return answer;
}