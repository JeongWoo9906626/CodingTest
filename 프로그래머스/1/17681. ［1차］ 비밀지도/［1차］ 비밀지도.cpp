#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) 
{
    std::vector<std::string> answer;
    
    for (int i = 0; i < n; ++i)
    {
        std::bitset<16> FirstBit(arr1[i]);
        std::bitset<16> SecondBit(arr2[i]);
        
        std::bitset<16> OrBit = FirstBit | SecondBit;
        std::string Bit = OrBit.to_string().substr(16 - n);
        
        for (char& Temp : Bit)
        {
            Temp  = (Temp == '1') ? '#' : ' ';
        }
        
        answer.push_back(Bit);
    }
    return answer;
}