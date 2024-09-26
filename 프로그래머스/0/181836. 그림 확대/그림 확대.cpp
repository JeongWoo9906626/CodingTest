#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) 
{
	std::vector<std::string> answer;

	for (std::string Pixel : picture)
	{
		std::string Temp = "";
		for (int i = 0; i < Pixel.size(); ++i)
		{
			for (int j = 0; j < k; ++j)
            {
	            Temp += Pixel[i];
            }
		}
		for (int i = 0; i < k; ++i)
		{
			answer.emplace_back(Temp);
		}
	}

	return answer;
}
