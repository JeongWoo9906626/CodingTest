#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int PickSize = nums.size() / 2;
    
    std::set<int> Unqiue(nums.begin(), nums.end());
    answer = std::min(static_cast<int>(Unqiue.size()), PickSize);
    
    return answer;
}