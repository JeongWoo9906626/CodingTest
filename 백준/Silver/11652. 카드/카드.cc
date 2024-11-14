#include <iostream>
#include <map>

int main()
{
    int N;
    std::cin >> N;

    std::map<long long, int> NumMap;

    for (int i = 0; i < N; i++)
    {
        long long Input;
        std::cin >> Input;
        ++NumMap[Input];
    }
    
    long long LeastNumber = 0;
    int MaxFrequency = 0;
    for (const std::pair<long long, int>& Temp : NumMap)
    {
        if (Temp.second > MaxFrequency || (Temp.second == MaxFrequency && Temp.first < LeastNumber))
        {
            LeastNumber = Temp.first;
            MaxFrequency = Temp.second;
        }
    }

    std::cout << LeastNumber;


    return 0;
}
