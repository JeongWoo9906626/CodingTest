#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string s, string skip, int index) 
{
    std::string answer = "";
    
    std::unordered_set<char> skipSet(skip.begin(), skip.end());
    
    for (char Temp : s) {
        int count = 0; 
        char NextTemp = Temp;
        
        while (count < index) {
            NextTemp++; 
            if (NextTemp > 'z') {
                NextTemp -= ('z' - 'a' + 1);
            }
            
            if (skipSet.find(NextTemp) == skipSet.end()) {
                ++count;
            }
        }
        
        answer += NextTemp;
    }
    
    return answer;
}