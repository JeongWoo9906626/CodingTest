#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) 
{
    bool answer = true;
    std::sort(phone_book.begin(), phone_book.end());
   
    for (int i = 0; i < phone_book.size() - 1; ++i)
    {
        std::string Temp = phone_book[i + 1].substr(0, phone_book[i].size());
        if (phone_book[i] == Temp)
        {
            answer = false;
            break;
        }
    }
    
    return answer;
}