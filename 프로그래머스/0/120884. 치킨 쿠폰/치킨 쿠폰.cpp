#include <string>
#include <vector>

using namespace std;

int solution(int chicken) 
{
	int answer = 0;
	int Coupon = chicken;
	while (Coupon / 10 > 0)
	{
		answer += Coupon / 10;
		Coupon = (Coupon / 10) + (Coupon % 10);
	}

	return answer;
}