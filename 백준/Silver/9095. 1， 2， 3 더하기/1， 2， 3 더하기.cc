#include <iostream>

int DP[12];

int main()
{
    int T;
    std::cin >> T;

    DP[1] = 1;
    DP[2] = 2;
    DP[3] = 4;
    for (int i = 4; i <= 11; ++i)
    {
        DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
    }

    for (int i = 0; i < T; ++i)
    {
        int Input = 0;
        std::cin >> Input;
        std::cout << DP[Input] << '\n';
    }

    return 0;
}
