#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) 
{
	int answer = 0;

	int AddNum = common[1] - common[0];
	int Temp = common[0];
	if (common[2] == common[1] + AddNum)
	{
		answer = common[common.size() - 1] + AddNum;
	}
	else
	{
		int TempAddNum = common[2] - common[1];
		int MulNum = TempAddNum / AddNum;
		answer = common[common.size() - 1] * MulNum;
	}

	return answer;
}