#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) 
{
    int MaxHp = health;
    int CurHp = health;

    int AttackIndex = 0;
    int Time = 1;

    int BonusCount = 0;
    int BonusTime = bandage[0];
    int TickHeal = bandage[1];
    int BonusHeal = bandage[2];

    while (true)
    {
        if (Time == attacks[AttackIndex][0])
        {
            CurHp -= attacks[AttackIndex][1];
            AttackIndex++;
            BonusCount = 0;
        }
        else
        {
            CurHp += TickHeal;
            BonusCount++;

            if (BonusCount == BonusTime)
            {
                CurHp += BonusHeal;
                BonusCount = 0;
            }
        }

        if (CurHp > MaxHp)
        {
            CurHp = MaxHp;
        }
        if (CurHp <= 0)
        {
            CurHp = -1;
            break;
        }
        if (Time == attacks[attacks.size() - 1][0])
        {
            break;
        }

        Time++;
    }

    return CurHp;
}