#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;

    for (int i = 1; i < land.size(); ++i) 
    {
        land[i][0] += std::max({land[i-1][1], land[i-1][2], land[i-1][3]});
        land[i][1] += std::max({land[i-1][0], land[i-1][2], land[i-1][3]});
        land[i][2] += std::max({land[i-1][0], land[i-1][1], land[i-1][3]});
        land[i][3] += std::max({land[i-1][0], land[i-1][1], land[i-1][2]});
    }
    
    answer = *std::max_element(land[land.size() - 1].begin(), land[land.size() - 1].end());

    return answer;
}