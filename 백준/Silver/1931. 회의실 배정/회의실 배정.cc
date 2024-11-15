#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int N;
    std::cin >> N;

    std::vector<std::pair<int, int>> Use;
    for (int i = 0; i < N; ++i)
    {
        int Begin, End;
        std::cin >> Begin >> End;
        Use.push_back({ Begin, End });
    }

    std::sort(Use.begin(), Use.end(), [](const std::pair<int, int>& Left, const std::pair<int, int>& Right)
        {
            if (Left.second == Right.second)
            {
                return Left.first < Right.first;
            }
            return Left.second < Right.second;
        });
    
    int Count = 0;
    int Time = 0;
    for (int i = 0; i < N; ++i)
    {
        if (Time <= Use[i].first)
        {
            ++Count;
            Time = Use[i].second;
        }
    }
    
    std::cout << Count;
    
    return 0;
}
