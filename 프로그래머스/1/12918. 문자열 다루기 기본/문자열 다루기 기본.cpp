#include <string>
#include <vector>

using namespace std;

bool solution(string s) 
{
    if (s.size() == 4 || s.size() == 6)
    {
        for (char Temp : s)
        {
            if (false == std::isdigit(Temp))
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}