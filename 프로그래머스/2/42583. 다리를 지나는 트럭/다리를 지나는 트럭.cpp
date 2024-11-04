#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) 
{
    int answer = 0;
    
    int CurTime = 0;
    int CurWeight = 0;
    std::queue<int> Truck;
    
    for (int i = 0; i < bridge_length; ++i) 
    {
        Truck.push(0);
    }
    
    int Index = 0;
    while (Index < truck_weights.size()) 
    {
        ++CurTime;

        CurWeight -= Truck.front();
        Truck.pop();

        if (CurWeight + truck_weights[Index] <= weight) 
        {
            Truck.push(truck_weights[Index]);
            CurWeight += truck_weights[Index];
            Index++;
        } 
        else
        {
            Truck.push(0);
        }
    }
    
    CurTime += bridge_length;
    answer = CurTime;
    
    return answer;
}