#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) 
{
	int answer = 0;

	int First = M - 1;
	int Check = N - 1;

	answer = First + (Check * M);

	return answer;
}