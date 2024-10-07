#include <string>
#include <vector>

using namespace std;

int WalletX = 0;
int WalletY = 0;

bool CanInsert(std::vector<int> Check)
{
    if (WalletX >= Check[0])
    {
        if (WalletY >= Check[1])
        {
            return true;
        }
    }
    if (WalletX >= Check[1])
    {
        if (WalletY >= Check[0])
        {
            return true;
        }
    }
    return false;
}

int solution(vector<int> wallet, vector<int> bill) 
{
    int answer = 0;
    
    WalletX = wallet[0];
    WalletY = wallet[1];
    
    while (true)
    {
        if (true == CanInsert(bill))
        {
            break;
        }
        
        if (bill[0] > bill[1])
        {
            bill[0] /= 2;
        }
        else
        {
            bill[1] /= 2;
        }
        ++answer;
    }
    
    return answer;
}