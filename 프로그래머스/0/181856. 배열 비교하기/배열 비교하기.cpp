#include <string>
#include <vector>

using namespace std;
int SumCompare(const std::vector<int>& Left, const std::vector<int>& Right)
{
	int LeftSum = 0;
	int RightSum = 0;
	for (int Number : Left)
	{
		LeftSum += Number;
	}
	for (int Number : Right)
	{
		RightSum += Number;
	}
	if (LeftSum > RightSum)
	{
		return 1;
	}
	if (LeftSum < RightSum)
	{
		return -1;
	}
	if (LeftSum == RightSum)
	{
		return 0;
	}
}
int solution(vector<int> arr1, vector<int> arr2) 
{
	int answer = 0;
	if (arr1.size() > arr2.size())
	{
		answer = 1;
	}
	if (arr1.size() < arr2.size())
	{
		answer = -1;
	}
	if (arr1.size() == arr2.size())
	{
		answer = SumCompare(arr1, arr2);
	}

	return answer;
}