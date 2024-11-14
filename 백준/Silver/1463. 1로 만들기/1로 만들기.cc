#include <iostream>

int DP[1000001];

int main()
{
    int N;
    std::cin >> N;

    DP[1] = 0;
    for (int i = 2; i <= N; ++i)
    {
        DP[i] = DP[i - 1] + 1;
        if (0 == i % 2)
        {
            DP[i] = std::min(DP[i], DP[i / 2] + 1);
        }
        if (0 == i % 3)
        {
            DP[i] = std::min(DP[i], DP[i / 3] + 1);
        }
    }
    std::cout << DP[N];

    return 0;
}
