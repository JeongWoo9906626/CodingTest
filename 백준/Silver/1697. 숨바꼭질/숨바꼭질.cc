#include <iostream>
#include <queue>
#include <algorithm>

int DX[4] = { 1, 0, -1, 0 };
int DY[4] = { 0, 1, 0, -1 };
int MaxX = 0;
int Time[100001];

int main()
{
	int MyPos = 0;
	int BroPos = 0;
	std::cin >> MyPos >> BroPos;
	std::fill(Time, Time + 100001, -1);
	std::queue<int> Que;
	Time[MyPos] = 0;
	Que.push(MyPos);

	while (-1 == Time[BroPos])
	{
		int Current = Que.front();
		Que.pop();

		for (int NextPos : {Current - 1, Current + 1, Current * 2})
		{
			if (NextPos < 0 || NextPos > 100000)
			{
				continue;
			}
			if (Time[NextPos] != -1)
			{
				continue;
			}

			Time[NextPos] = Time[Current] + 1;
			Que.push(NextPos);
		}
	}

	std::cout << Time[BroPos];

	return 0;
}