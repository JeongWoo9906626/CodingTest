#include <iostream>
#include <vector>

int DP[301][3];

int main()
{
    int N;
    std::cin >> N;

    std::vector<int> Stair(N + 1, 0);
    for (int i = 1; i <= N; ++i)
    {
        int Input = 0;
        std::cin >> Input;
        Stair[i] = Input;
    }
    if (1 == N)
    {
        std::cout << Stair[1];
        return 0;
    }

    DP[1][1] = Stair[1];
    DP[1][2] = 0;
    DP[2][1] = Stair[2];
    DP[2][2] = Stair[1] + Stair[2];
   
    for (int i = 3; i <= N; ++i)
    {
        DP[i][1] = std::max(DP[i - 2][1], DP[i - 2][2]) + Stair[i];
        DP[i][2] = DP[i - 1][1] + Stair[i];
    }
   
    std::cout << std::max(DP[N][1], DP[N][2]);

    

    return 0;
}
