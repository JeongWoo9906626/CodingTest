#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) 
{
	std::vector<std::vector<int>> answer;

	int Row = arr.size();
	int Column = arr[0].size();

	if (Row > Column)
	{
		for (int i = 0; i < arr.size(); ++i)
		{
			for (int j = Column; j < Row; ++j)
			{
				arr[i].push_back(0);
			}
		}
	}
	else if (Row < Column)
	{
		std::vector<int> Temp(Column, 0);
		for (int i = Row; i < Column; ++i)
		{
			arr.push_back(Temp);
		}
	}
	
	answer = arr;
	
	return answer;
}