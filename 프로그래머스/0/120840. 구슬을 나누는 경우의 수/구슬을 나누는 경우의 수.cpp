#include <string>
#include <vector>
#include <cmath>

int solution(int balls, int share) 
{
	double answer = 1;

	for (int i = share + 1; i <= balls; ++i)
	{
		answer *= i;
	}

	for (int i = 1; i <= balls - share; ++i)
	{
		answer /= i;
	}

	return static_cast<int>(std::round(answer));
}