#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <cmath>

using namespace std;

bool PrimeCheck(int Number) {
    if (Number <= 1)
    {
        return false;
    }
    if (Number == 2)
    {
        return true;
    }
    for (int i = 2; i <= std::sqrt(Number); ++i) 
    {
        if (Number % i == 0)
        {
            return false;
        }
    }
    return true;
}


int solution(string numbers) 
{
    std::unordered_set<int> Prime;
    std::sort(numbers.begin(), numbers.end());

    do 
    {
        for (int len = 1; len <= numbers.size(); ++len) 
        {
            int Number = stoi(numbers.substr(0, len));
            if (true == PrimeCheck(Number)) 
            {
                Prime.insert(Number);
            }
        }
    } 
    while (std::next_permutation(numbers.begin(), numbers.end()));

    return Prime.size();
}