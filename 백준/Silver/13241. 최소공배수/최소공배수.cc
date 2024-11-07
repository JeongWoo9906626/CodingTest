#include <iostream>

long long GCD(long long A, long long B)
{
	while (B != 0)
	{
		long long Temp = B;
		B = A % B;
		A = Temp;
	}
	return A;
}

long long LCM(long long A, long long B)
{
	return A * B / GCD(A, B);
}

int main()
{
	long long A = 0;
	long long B = 0;
	std::cin >> A >> B;
	std::cout << LCM(A, B) << std::endl;
	return 0;
}