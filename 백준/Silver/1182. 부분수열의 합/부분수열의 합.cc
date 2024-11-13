#include <iostream>
#include <vector>

void Function(std::vector<int>& Vec, int Current, int Sum, int N, int S, int& Count)
{
	if (Current == N)
	{
		if (Sum == S)
		{
			++Count;
		}
		return;
	}

	Function(Vec, Current + 1, Sum, N, S, Count);
	Function(Vec, Current + 1, Sum + Vec[Current], N, S, Count);
}

int main()
{
	int N, S, Count = 0;
	std::cin >> N >> S;

	std::vector<int> Vec(N, 0);

	for (int i = 0; i < N; ++i)
	{
		std::cin >> Vec[i];
	}
	Function(Vec, 0, 0, N, S, Count);
	if (S == 0)
	{
		--Count;
	}
	std::cout << Count;

	return 0;
}