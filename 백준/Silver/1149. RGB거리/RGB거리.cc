#include <iostream>
#include <algorithm>

int DP[1001][3];
int R[1001];
int G[1001];
int B[1001];

int main()
{
    int N;
    std::cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        std::cin >> R[i] >> G[i] >> B[i];
    }
    
    DP[1][0] = R[1];
    DP[1][1] = G[1];
    DP[1][2] = B[1];

    for (int i = 2; i <= N; ++i)
    {
        DP[i][0] = std::min(DP[i - 1][1], DP[i - 1][2]) + R[i];
        DP[i][1] = std::min(DP[i - 1][0], DP[i - 1][2]) + G[i];
        DP[i][2] = std::min(DP[i - 1][0], DP[i - 1][1]) + B[i];
    }

    std::cout << *std::min_element(DP[N], DP[N] + 3);

    return 0;
}
