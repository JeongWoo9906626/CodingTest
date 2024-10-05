#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) 
{
	long long answer = -1;

	long long Temp = static_cast<long long>(std::sqrt(n));
	if (n == Temp * Temp)
	{
		answer = (Temp + 1) * (Temp + 1);
	}

	return answer;
}