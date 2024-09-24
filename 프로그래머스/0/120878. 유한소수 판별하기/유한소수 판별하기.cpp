#include <string>
#include <vector>
#include <numeric>
using namespace std;
std::vector<int> Prime(int n)
{
	std::vector<int> Factor;
	while (0 == n % 2)
	{
		Factor.push_back(2);
		n /= 2;
	}

	for (int i = 3; i * i <= n; i += 2)
	{
		Factor.push_back(i);
		n /= i;
	}
    return Factor;
}
int solution(int a, int b) 
{
		int answer = 1;
	int GCD = std::gcd(a, b);
	b = b / GCD;

	while (0 == b % 2)
	{
		b /= 2;
	}
	while (0 == b % 5)
	{
		b /= 5;
	}

	if (1 != b)
	{
		answer = 2;
	}

	return answer;
}