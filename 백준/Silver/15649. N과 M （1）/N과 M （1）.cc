#include <iostream>

int Array[10];
bool IsUsed[10];

void Function(int N, int M, int Number)
{
	if (Number == M)
	{
		for (int i = 0; i < M; ++i)
		{
			std::cout << Array[i] << ' ';
		}
		std::cout << '\n';
		return;
	}

	for (int i = 1; i <= N; ++i)
	{
		if (false == IsUsed[i])
		{
			Array[Number] = i;
			IsUsed[i] = true;
			Function(N, M, Number + 1);
			IsUsed[i] = false;
		}
	}
}

int main()
{
	int N, M;
	std::cin >> N >> M;
	Function(N, M, 0);
	
	return 0;
}