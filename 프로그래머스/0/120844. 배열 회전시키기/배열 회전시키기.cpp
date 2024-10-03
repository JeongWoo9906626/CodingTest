#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    
    if (direction == "right")
    {
        int End = numbers[numbers.size() - 1];
        int Next = numbers[0];
        int NextNext = 0;
        for (int i = 0; i < numbers.size() - 1; ++i)
        {
            NextNext = numbers[i + 1];
            numbers[i + 1] = Next;
            Next = NextNext;
        }
        numbers[0] = End;
        answer = numbers;
    }
    else
    {
        int First = numbers[0];
        int Next = numbers[numbers.size() - 1];
        int NextNext = 0;
        for (int i = numbers.size() - 1; i > 0; --i)
        {
            NextNext = numbers[i - 1];
            numbers[i - 1] = Next;
            Next = NextNext;
        }
        numbers[numbers.size() - 1] = First;
        answer = numbers;
    }
    
    
    return answer;
}