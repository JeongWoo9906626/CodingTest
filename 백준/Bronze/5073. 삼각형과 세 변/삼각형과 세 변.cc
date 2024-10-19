#include <iostream>
#include <string>
#include <algorithm>
std::string solution(int A, int B, int C)
{
	std::string answer = "";
	
	int MaxLen = std::max({A, B, C});
	if (A + B + C - MaxLen <= MaxLen)
	{
		answer = "Invalid";
		return answer;
	}

	if (A == B && B == C)
	{
		answer = "Equilateral";
	}
	else if (A == B || B == C || A == C)
	{
		answer = "Isosceles";
	}
	else
	{
		answer = "Scalene";
	}

	return answer;
}

int main()
{
    int a = -1;
    int b = -1;
    int c = -1;
    while (a != 0 && b != 0 && c != 0)
    {
        std::cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
        std::cout << solution(a, b, c) << std::endl;
    }
    return 0;
}