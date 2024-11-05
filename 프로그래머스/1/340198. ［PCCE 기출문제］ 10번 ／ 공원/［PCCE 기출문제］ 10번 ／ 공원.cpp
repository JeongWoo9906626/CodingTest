#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(std::vector<int> mats, std::vector<std::vector<std::string>> park) 
{
    int Y = park.size();
    int X = park[0].size();
    
    std::sort(mats.rbegin(), mats.rend());
    
    for (int Mat : mats)
    {
        for (int i = 0; i <= Y - Mat; ++i)
        {
            for (int j = 0; j <= X - Mat; ++j)
            {
                bool CanDo = true;
                for (int x = 0; x < Mat; x++)
                {
                    for (int y = 0; y < Mat; y++) 
                    {
                        if (park[i + x][j + y] != "-1") 
                        {
                            CanDo = false;
                            break;
                        }
                    }
                    if (false == CanDo) 
                    {
                        break;
                    }
                }
                if (true == CanDo) 
                {
                    return Mat;
                }
            }
        }
    }
    return -1;
}