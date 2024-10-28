#include <iostream>

using namespace std;

void PrintStar(int n, int m)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    PrintStar(a, b);
    return 0;
}