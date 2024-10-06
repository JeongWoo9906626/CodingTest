#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
	long long answer = 0;
	int Begin = a;
	int End = b;
	if (a > b)
	{
		Begin = b;
		End = a;
	}

	for (int i = Begin; i <= End; ++i)
	{
		answer += i;
	}

	return answer;
}