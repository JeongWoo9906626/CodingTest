#include <iostream>

int DP[1000001];
int Prev[1000001];

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int N;
    std::cin >> N;

    DP[1] = 0;
    for (int i = 2; i <= N; ++i)
    {
        DP[i] = DP[i - 1] + 1;
        Prev[i] = i - 1;
        if (0 == i % 2 && DP[i] > DP[i / 2] + 1)
        {
            DP[i] = DP[i / 2] + 1;
            Prev[i] = i / 2;
        }
        if (0 == i % 3 && DP[i] > DP[i / 3] + 1)
        {
            DP[i] = DP[i / 3] + 1;
            Prev[i] = i / 3;
        }
    }

    std::cout << DP[N] << '\n';
    int Cur = N;
    while (true)
    {
        std::cout << Cur << ' ';
        if (Cur == 1)
        {
            break;
        }
        Cur = Prev[Cur];
    }

    return 0;
}
