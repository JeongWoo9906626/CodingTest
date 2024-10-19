#include <iostream>

int solution(int H, int W, int N, int M)
{
	int answer = 0;
	int Y = H / (N + 1);
	if (H % (N + 1) != 0)
	{
		++Y;
	}
	int X = W / (M + 1);
	if (W % (M + 1) != 0)
	{
		++X;
	}
	answer = Y * X;
	return answer;
}

int main() 
{
	int H = 0;
    int W = 0;
    int N = 0;
    int M = 0;
    std::cin >> H >> W >> N >> M;
    int Result = solution(H, W, N, M);
	std::cout << Result << std::endl;

	return 0;
}