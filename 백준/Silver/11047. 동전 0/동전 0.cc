#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int N, K;
    std::cin >> N >> K;

    std::vector<int> Money(N, 0);
    for (int i = 0; i < N; ++i)
    {
        std::cin >> Money[i];
    }

    std::sort(Money.begin(), Money.end(), std::greater<int>());
    
    int Count = 0;
    for (int i = 0; i < Money.size(); ++i)
    {
        if (K >= Money[i])
        {
            int Temp = K / Money[i];
            Count += Temp;
            K -= Money[i] * Temp;
        }
    }
    
    std::cout << Count;
    
    return 0;
}
