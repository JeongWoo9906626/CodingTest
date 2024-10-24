#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int GetDistance(const std::pair<int, int>& Start, const std::pair<int, int>& Dest)
{
    int Result = 0;
    Result += std::abs(Start.first - Dest.first);
    Result += std::abs(Start.second - Dest.second);
    return Result;
}

string solution(vector<int> numbers, string hand) 
{
    string answer = "";
    
    std::unordered_map<int, std::pair<int, int>> KeyPad;
    KeyPad[1] = {0, 0};
    KeyPad[2] = {1, 0};
    KeyPad[3] = {2, 0};
    KeyPad[4] = {0, 1};
    KeyPad[5] = {1, 1};
    KeyPad[6] = {2, 1};
    KeyPad[7] = {0, 2};
    KeyPad[8] = {1, 2};
    KeyPad[9] = {2, 2};
    KeyPad[0] = {1, 3};
    
   
    std::pair<int, int> CurLeftPos = {0, 3};
    std::pair<int, int> CurRightPos = {2, 3};
    
    for (int Number : numbers)
    {
        if (Number == 1 || Number == 4 || Number == 7)
        {
            answer += "L";
            CurLeftPos = KeyPad[Number];
        }
        else if (Number == 3 || Number == 6 || Number == 9)
        {
            answer += "R";
            CurRightPos = KeyPad[Number];
        }
        else
        {
            std::pair<int, int> Dest = KeyPad[Number];
            int RightDistance = GetDistance(CurRightPos, Dest);
            int LeftDistance = GetDistance(CurLeftPos, Dest);
            if (RightDistance < LeftDistance)
            {
                answer += "R";
                CurRightPos = KeyPad[Number];
            }
            else if (RightDistance > LeftDistance)
            {
                answer += "L";
                CurLeftPos = KeyPad[Number];
            }
            else
            {
                if (hand == "right")
                {
                    answer += "R";
                    CurRightPos = KeyPad[Number];
                }
                else
                {
                    answer += "L";
                    CurLeftPos = KeyPad[Number];
                }
            }
        }
    }
    
    return answer;
}