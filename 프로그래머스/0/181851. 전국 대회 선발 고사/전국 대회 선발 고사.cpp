#include <string>
#include <vector>
#include <map>
using namespace std;
class Info
{
public:
	Info()
	{
	}
	Info(bool _attend, int _Index)
	{
		attend = _attend;
		Index = _Index;
	}
	bool attend = false;
	int Index = 0;
};

int solution(vector<int> rank, vector<bool> attendance) 
{
	int answer = 0;
	std::map<int, Info> Check;

	for (int i = 0; i < rank.size(); ++i)
	{
		Info Temp = Info(attendance[i], i);
		Check.insert(std::make_pair(rank[i], Temp));
	}

	int AttendIndex[3] = { 0, };
	int Count = 0;
	for (std::pair<int, Info> Temp : Check)
	{
		int Rank = Temp.first;
		Info Information = Temp.second;
		if (true == Information.attend)
		{
			AttendIndex[Count] = Information.Index;
			++Count;
		}
		if (Count >= 3)
		{
			break;
		}
	}

	answer = 10000 * AttendIndex[0] + 100 * AttendIndex[1] + AttendIndex[2];
	return answer;
}