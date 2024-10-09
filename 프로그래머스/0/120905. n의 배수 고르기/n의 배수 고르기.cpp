#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    
    for (int i = 0; i < numlist.size(); ++i)
    {
        if (0 == numlist[i] % n)
        {
            answer.emplace_back(numlist[i]);
        }
    }
    
    return answer;
}