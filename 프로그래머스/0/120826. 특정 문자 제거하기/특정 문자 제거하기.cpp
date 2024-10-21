#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) 
{
    string answer = my_string;
    answer.erase(std::remove(answer.begin(), answer.end(), letter[0]), answer.end());
    return answer;
}