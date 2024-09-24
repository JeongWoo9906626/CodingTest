#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) 
{
	int answer = 0;
	int Count = 0;
	int Len = A.size();

	if (B == A)
	{
		return answer;
	}

	for (int i = 1; i < Len; ++i)
	{
		std::string Temp;
		Temp.resize(Len);
		Temp[0] = A[Len - 1];
		for (int i = 0; i < Len - 1; ++i)
		{
			Temp[i + 1] = A[i];
		}
		A = Temp;
		if (B == A)
		{
			answer = i;
			break;
		}
		++Count;
	}
	if (Count == Len - 1)
	{
		answer = -1;
	}

	return answer;
}