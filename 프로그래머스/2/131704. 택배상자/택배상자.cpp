#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int solution(vector<int> order) 
{
    int answer = 0;
    std::stack<int> Wait;
    std::queue<int> Product;
    for (int i = 1; i <= order.size(); ++i)
    {
        Product.push(i);
    }
    
    for (int Number : order)
    {
        bool Check = false;
        while (false == Product.empty() && Product.front() <= Number)
        {
            if (Product.front() == Number)
            {
                Product.pop();
                Check = true;
                ++answer;
                break;
            }
            
            int Temp = Product.front();
            Product.pop();
            Wait.push(Temp);
        }
        
        if (false == Check)
        {
            if (false == Wait.empty() && Number == Wait.top())
            {
                Wait.pop();
                ++answer;
            }
            else
            {
                break;
            }
        }
        
    }
    
    return answer;
}