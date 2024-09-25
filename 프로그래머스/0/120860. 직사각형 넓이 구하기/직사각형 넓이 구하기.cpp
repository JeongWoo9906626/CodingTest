#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) 
{
	int answer = 0;
	std::vector<int> X;
	std::vector<int> Y;
	
	for (std::vector<int> dot : dots)
	{
		X.push_back(dot[0]);
		Y.push_back(dot[1]);
	}

	int LenX = *std::max_element(X.begin(), X.end()) - *std::min_element(X.begin(), X.end());
	int LenY = *std::max_element(Y.begin(), Y.end()) - *std::min_element(Y.begin(), Y.end());

	answer = LenX * LenY;

	return answer;
}