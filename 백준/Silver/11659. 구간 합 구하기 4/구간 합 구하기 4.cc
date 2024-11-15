#include <iostream>
int DP[100001];
int Number[100001];

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int N, M;
    std::cin >> N >> M;
    
    for (int i = 1; i <= N; ++i)
    {
        std::cin >> Number[i];
        DP[i] = DP[i - 1] + Number[i];
    }

    for (int i = 0; i < M; ++i)
    {
        int Begin, End;
        std::cin >> Begin >> End;
        std::cout << DP[End] - DP[Begin - 1] << '\n';
    }

    return 0;
}
