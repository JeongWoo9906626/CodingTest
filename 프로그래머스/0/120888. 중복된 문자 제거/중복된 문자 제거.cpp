#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string my_string) {
	std::string answer = "";
	std::unordered_set<char> Alphabet;
	for (char Temp : my_string)
	{
        if (Alphabet.find(Temp) == Alphabet.end())
        {
    		Alphabet.insert(Temp);
            answer += Temp;       
        }
	}

	return answer;
}