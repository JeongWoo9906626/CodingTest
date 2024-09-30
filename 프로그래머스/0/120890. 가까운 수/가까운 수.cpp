#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
	int answer = 0;
	int Closet = 100;
	int Count = 0;
	int Index = 0;

	for (int Number : array)
	{
		int Dist = std::abs(n - Number);
		if (Dist < Closet)
		{
			Closet = Dist;
			Index = Count;
		}
		if (Dist == Closet)
		{
			if (array[Index] > Number)
			{
				Index = Count;
			}
		}
		++Count;
	}
	answer = array[Index];

	return answer;
}