#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int solution(vector<int> topping) 
{
    int answer = 0;
    std::unordered_map<int, int> Brother; 
    std::unordered_set<int> CheolSoo;

    for (int Number : topping) 
    {
        ++Brother[Number];
    }

    for (int i = 0; i < topping.size(); i++) 
    {
        CheolSoo.insert(topping[i]); 
        --Brother[topping[i]];
        
        if (0 == Brother[topping[i]]) 
        {
            Brother.erase(topping[i]);
        }

        if (CheolSoo.size() == Brother.size()) 
        {
            ++answer;
        }
    }
    return answer;
}