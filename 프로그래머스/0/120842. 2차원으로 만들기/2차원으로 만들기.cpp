#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    int Len = num_list.size() / n;
    answer.resize(Len);
    
    for (int i = 0; i < answer.size(); ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            answer[i].emplace_back(num_list[i * n + j]);
        }
    }
    
    return answer;
}