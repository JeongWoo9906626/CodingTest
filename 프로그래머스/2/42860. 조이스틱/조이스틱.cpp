#include <string>
#include <vector>

using namespace std;

int solution(string name) 
{
    int answer = 0;
    
    int n = name.length();
    int Move = n - 1;
    for (int i = 0; i < n; i++) 
    {
        if (name[i] - 'A' < 14)
        {
            answer += name[i] - 'A';
        }
        else
        {
            answer += 'Z' - name[i] + 1;
        }

        int Index = i + 1;
        while (Index < n && name[Index] == 'A') 
        {
            Index++;
        }

        Move = std::min(Move, i + n - Index + std::min(i, n - Index));
    }

    answer += Move;
    return answer;
}