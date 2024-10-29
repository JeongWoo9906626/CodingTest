#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(string skill, vector<string> skill_trees) 
{
    int answer = 0;
    
    for (const std::string& SkillTree : skill_trees)
    {
        int Index = 0;
        bool Check = true;
        for (char Temp : SkillTree) 
        {
            int Pos = skill.find(Temp);
            if (Pos != std::string::npos) 
            {
                if (Pos != Index)
                {
                    Check = false;
                    break;
                }
                Index++;
            }
        }
        
        if (true == Check)
        {
            ++answer;
        }
    }
    
    return answer;
}