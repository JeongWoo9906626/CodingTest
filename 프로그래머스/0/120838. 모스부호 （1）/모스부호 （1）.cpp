#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

string solution(string letter) {
    string answer = "";
    
    std::map<std::string, std::string> Morse = 
    {
	    {".-", "a" }, {"-...", "b"}, {"-.-.", "c"}, {"-.." , "d"}, {"." , "e"}, {"..-." , "f"},
	    {"--." , "g"},{"...." , "h"},{".." , "i"},{".---" , "j"},{"-.-" , "k"},{".-.." , "l"},
    	{"--" , "m"},{"-." , "n"},{"---" , "o"},{".--." , "p"},{"--.-" , "q"},{".-." , "r"},
	    {"..." , "s"},{"-" , "t"},{"..-" , "u"},{"...-" , "v"},{".--" , "w"},{"-..-" , "x"},
	    {"-.--" , "y"},{"--.." , "z"}
    };
    
    std::stringstream ST = std::stringstream(letter);
    std::string Temp;
    while (ST >> Temp)
    {
        answer += Morse[Temp];
    }
    
    
    return answer;
}