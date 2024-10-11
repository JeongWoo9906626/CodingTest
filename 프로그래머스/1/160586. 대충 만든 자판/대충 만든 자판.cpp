#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    std::unordered_map<char, int> Map;
    for (std::string Alphabet : keymap)
    {
        for (int i = 0; i < Alphabet.size(); ++i)
        {
            char Temp = Alphabet[i];
            if (Map.find(Temp) == Map.end() || Map[Temp] > i + 1)
            {
                Map[Temp] = i + 1;
            }
        }
    }
    
    for (std::string Word : targets) 
    {
        int Count = 0;
        for (char Alphabet : Word) 
        {
            if (Map.find(Alphabet) != Map.end())
            {
                Count += Map[Alphabet];
            } 
            else 
            {
                Count = -1;
                break;
            }
        }

        answer.push_back(Count);
    }
    
    return answer;
}