using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    
    long long Sum = 0;
    for (int i = 1; i <= count; ++i)
    {
        Sum += price * i;
    }
    
    if (money - Sum >= 0)
    {
        answer = 0;
    }
    else
    {
        answer = Sum - money;
    }
    
    return answer;
}