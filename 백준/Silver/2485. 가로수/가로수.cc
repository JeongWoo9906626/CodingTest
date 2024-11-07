#include <iostream>
#include <vector>

int GCD(int A, int B)
{
	while (B != 0)
	{
		int Temp = B;
		B = A % B;
		A = Temp;
	}
	return A;
}

int main()
{
	int InputNumber = 0;
	std::cin >> InputNumber;
	std::vector<int> InputVec(InputNumber, 0);
	for (int i = 0; i < InputNumber; ++i)
	{
		std::cin >> InputVec[i];
	}
	std::vector<int> Distance(InputNumber - 1, 0);
	for (int i = 0; i < InputNumber - 1; ++i) 
	{
		Distance[i] = InputVec[i + 1] - InputVec[i];
	}

	int DistanceGCD = Distance[0];
	for (int i = 1; i < Distance.size(); ++i)
	{
		DistanceGCD = GCD(DistanceGCD, Distance[i]);
	}

	int Count = 0;
	for (int Dist : Distance) 
	{
		Count += (Dist / DistanceGCD) - 1;
	}

	std::cout << Count << std::endl;

	return 0;
}