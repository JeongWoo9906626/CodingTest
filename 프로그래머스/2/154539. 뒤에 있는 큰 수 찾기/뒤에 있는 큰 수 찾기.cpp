#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> numbers) 
{
	std::vector<int> answer;
	answer.resize(numbers.size(), -1);
	std::stack<int> Stack;
	Stack.push(numbers[numbers.size() - 1]);

	for (int i = numbers.size() - 2; i >= 0; --i)
	{
		bool Check = false;

		while (true != Stack.empty())
		{
			int Temp = Stack.top();
			Stack.pop();
			if (Temp > numbers[i])
			{
				answer[i] = Temp;
				Check = true;
				break;
			}
		}

		if (true == Check)
		{
			Stack.push(answer[i]);
		}
		Stack.push(numbers[i]);
	}
	
	return answer;
}