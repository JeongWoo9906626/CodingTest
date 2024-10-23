#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) 
{
    int answer = 0;

    int MaxWidth = 0;
    int MaxHeight = 0;

    for (const auto& size : sizes) 
    {
        int w = std::max(size[0], size[1]); 
        int h = std::min(size[0], size[1]); 

        MaxWidth = std::max(MaxWidth, w);
        MaxHeight = std::max(MaxHeight, h);
    }

    answer = MaxWidth * MaxHeight;

    return answer;
}