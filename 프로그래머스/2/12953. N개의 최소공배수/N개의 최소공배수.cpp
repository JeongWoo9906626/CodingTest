#include <string>
#include <vector>

using namespace std;

int GCD(int Left, int Right)
{
    while (Right != 0)
    {
        int Temp = Right;
        Right = Left % Right;
        Left = Temp;
    }
    return Left;
}

int LCM(int Left, int Right)
{
    int Result = Left * Right;
    int Gcd = GCD(Left, Right);
    return Result / Gcd;
}

int solution(vector<int> arr) 
{
    int answer = arr[0];
    
    for (int i = 1; i < arr.size(); ++i)
    {
        answer = LCM(answer, arr[i]);
    }
    
    return answer;
}