#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) 
{
    string answer = "";
    
    for (int i = 0; i < my_string.size(); ++i)
    {
        my_string[i] = std::tolower(my_string[i]);    
    }
    std::sort(my_string.begin(), my_string.end());
    answer = my_string;
    return answer;
}