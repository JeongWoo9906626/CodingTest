#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) 
{
	int answer = 0;
	int MaxIndex = std::distance(sides.begin(), std::max_element(sides.begin(), sides.end()));
	int OtherIndex = 0;
	if (MaxIndex == 0)
	{
		OtherIndex = 1;
	}
    
	for (int i = sides[MaxIndex] - sides[OtherIndex]; i < sides[MaxIndex]; ++i)
    {
	    if (i + sides[OtherIndex] > sides[MaxIndex])
	    {
		    ++answer;
	    }
    }
    
	for (int i = sides[MaxIndex]; i <= sides[OtherIndex] + sides[MaxIndex]; ++i)
	{
		if (i < sides[OtherIndex] + sides[MaxIndex])
		{
			++answer;
		}
	}
	return answer;
}