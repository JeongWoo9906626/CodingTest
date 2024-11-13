#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
	int N, M, Count = 0;
	std::cin >> N >> M;
	std::vector<int> Vec(N);
	for (int i = 0; i < N; ++i)
	{
		Vec[i] = i + 1;
	}


	std::vector<int> Masking(N, 0);
	std::fill(Masking.begin(), Masking.begin() + M, 1);
	do
	{
		for (int i = 0; i < N; ++i)
		{
			if (1 == Masking[i])
			{
				std::cout << Vec[i] << " ";
			}
		}
		std::cout << '\n';
	} while (std::prev_permutation(Masking.begin(), Masking.end()));


	return 0;
}