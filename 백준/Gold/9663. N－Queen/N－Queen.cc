#include <iostream>

bool IsUsedX[40];
bool IsUsedY[40];
bool IsUsedXY[40];

void Function(int& Count, int N, int Current)
{
	if (Current == N)
	{
		++Count;
		return;
	}

	for (int i = 0; i < N; ++i)
	{
		if (true == IsUsedX[i] || true == IsUsedY[i + Current] || true == IsUsedXY[Current - i + N - 1])
		{
			continue;
		}
		IsUsedX[i] = true;
		IsUsedY[i + Current] = true;
		IsUsedXY[Current - i + N - 1] = true;
		Function(Count, N, Current + 1);
		IsUsedX[i] = false;
		IsUsedY[i + Current] = false;
		IsUsedXY[Current - i + N - 1] = false;
	}
}

int main()
{
	int N, Count = 0;
	std::cin >> N;
	Function(Count, N, 0);
	std::cout << Count;
	return 0;
}