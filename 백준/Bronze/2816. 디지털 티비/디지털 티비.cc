#include <iostream>
#include <string>
using namespace std;
int main(void) 
{
    int n;
    cin >> n;
    int kbs1_idx, kbs2_idx;
    for (int i = 0; i < n; i++) 
    {
        string chnl;
        cin >> chnl;
        if (chnl == "KBS1") kbs1_idx = i;
        if (chnl == "KBS2") kbs2_idx = i;
    }
 
    if (kbs1_idx > kbs2_idx) kbs2_idx++;
    for (int i = 0; i < kbs1_idx; i++) cout << '1';
    for (int i = 0; i < kbs1_idx; i++) cout << '4';
    if (kbs2_idx != 1) 
    {
        for (int i = 0; i < kbs2_idx; i++) cout << '1';
        for (int i = 1; i < kbs2_idx; i++) cout << '4';
    }
    return 0;
}
