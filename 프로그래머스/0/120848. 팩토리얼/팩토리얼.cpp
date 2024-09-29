#include <string>
#include <vector>

using namespace std;
int CalcFactorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * CalcFactorial(n - 1);
}
int solution(int n) 
{
	int answer = 0;
	int Test = CalcFactorial(10);
	for (int i = 1; i <= 10; ++i)
	{
		int Factorial = CalcFactorial(i);
		if (n == Factorial)
		{
			answer = i;
			break;
		}
		else if (n < Factorial)
		{
			answer = i - 1;
			break;
		}
	}

	return answer;
}