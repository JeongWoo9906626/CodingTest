#include <string>
#include <vector>

using namespace std;

int solution(int hp) 
{
    int answer = 0;
    int Index = 0;
    int AttackDamage[3] = {5, 3, 1};
    while (0 != hp)
    {
        answer += hp / AttackDamage[Index];
        hp = hp % AttackDamage[Index];
        ++Index;
    }
    
    
    return answer;
}