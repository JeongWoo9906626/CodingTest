#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, std::vector<int> section) 
{
    int answer = 0;
    
    std::vector<bool> Wall;
    Wall.resize(n, true);
    for (int Number : section)
    {
        Wall[Number - 1] = false;
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (Wall[i] == false)
        {
            for (int j = 0; j < m; ++j)
            {
				if (i + j < n)
				{
					Wall[i + j] = true;
				}
            }
            ++answer;
        }
    }
    
    return answer;
}