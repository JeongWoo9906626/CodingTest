#include <string>
#include <vector>

using namespace std;

string solution(int num) {
	std::string answer = "Odd";

    if (num == 0 || 0 == num % 2)
    {
        answer = "Even";
    }
    
	return answer;
}