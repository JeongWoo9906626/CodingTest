#include <iostream>
#include <vector>
#include <stack>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::vector<int> answer;

    int N;
    std::cin >> N;

    std::stack<std::pair<int, int>> Tower;
    std::vector<int> Height;
    Height.resize(N, 0);
    answer.resize(N, 0);
    for (int i = 0; i < N; ++i)
    {
        std::cin >> Height[i];
    }

    for (int i = 0; i < N; ++i)
    {
        while (false == Tower.empty() && Tower.top().first <= Height[i])
        {
            Tower.pop();
        }

        if (false == Tower.empty())
        {
            answer[i] = Tower.top().second;
        }

        Tower.push({ Height[i], i + 1 });
    }

    for (int Number : answer)
    {
        std::cout << Number << " ";
    }
    
    return 0;
}
