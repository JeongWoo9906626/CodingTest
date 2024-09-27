#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
	int answer = 0;
	int Index = 0;
	int MaxSize = numbers.size();
	for (int i = 1; i < k; ++i)
	{
		Index += 2;
		if (Index >= numbers.size())
		{
			Index -= numbers.size();
		}
	}

	answer = numbers[Index];

	return answer;
}