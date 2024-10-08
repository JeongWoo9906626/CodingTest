#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::vector<int> solution(std::vector<std::string> wallpaper) 
{
    std::vector<int> answer;
    
    std::vector<int> X;
    std::vector<int> Y;
    
    int Index = 0;
    for (std::string Temp : wallpaper)
    {
        std::string::size_type pos = Temp.find('#');
        while (pos != std::string::npos)
        {
            int XIndex = pos;
            Y.emplace_back(Index);
            X.emplace_back(XIndex);

            pos = Temp.find('#', pos + 1);
        }
        ++Index;
    }
    
    std::sort(Y.begin(), Y.end());
    std::sort(X.begin(), X.end());
    
    answer.emplace_back(Y[0]);
    answer.emplace_back(X[0]);
	answer.emplace_back(Y[Y.size() - 1] + 1);
	answer.emplace_back(X[X.size() - 1] + 1);
    return answer;
}