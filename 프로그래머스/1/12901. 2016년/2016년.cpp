#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) 
{
    string answer = "";
    std::vector<std::string> Date = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };
    std::vector<int> MonthPerDay = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    int Day = 0;
    for (int i = 1; i < a; ++i)
    {
        Day += MonthPerDay[i];
    }
    Day += b;
    
    answer = Date[Day % 7];
    
    return answer;
}