#include <string>
#include <vector>

using namespace std;

std::vector<int> Find(std::vector<std::vector<int>>& Array, int X, int Y, int Len)
{
    int Value = Array[X][Y];
    bool IsSame = true;
    for (int i = X; i < X + Len; ++i) 
    {
        for (int j = Y; j < Y + Len; ++j) 
        {
            if (Array[i][j] != Value) 
            {
                IsSame = false;
                break;
            }
        }
        if (false == IsSame) 
        {
            break;
        }
    }

    if (true == IsSame) 
    {
        return Value == 0 ? std::vector<int>{1, 0} : std::vector<int>{0, 1};
    }
    
    int New = Len / 2;
    std::vector<int> TopLeft = Find(Array, X, Y, New);
    std::vector<int> TopRight = Find(Array, X, Y + New, New);
    std::vector<int> BottomLeft = Find(Array, X + New, Y, New);
    std::vector<int> BottomRight = Find(Array, X + New, Y + New, New);

    std::vector<int> Result = {TopLeft[0] + TopRight[0] + BottomLeft[0] + BottomRight[0], TopLeft[1] + TopRight[1] + BottomLeft[1] + BottomRight[1]};
    return Result;
}

std::vector<int> solution(std::vector<std::vector<int>> arr) 
{
    vector<int> answer;
    answer = Find(arr, 0, 0, arr.size());
    return answer;
}