#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    int answer = 0;
    
    std::string Left = "";
    std::string Right = "";
    for (int i = 0; i < 3; ++i)
    {
		Left += std::to_string(date1[i]);
		Right += std::to_string(date2[i]);
    }
    
    int LeftDay = std::stoi(Left);
    int RightDay = std::stoi(Right);
    
    if (LeftDay < RightDay)
    {
        answer = 1;
    }
    
    return answer;
}