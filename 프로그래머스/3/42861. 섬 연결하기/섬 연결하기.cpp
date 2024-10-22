#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class DisjointSet
{
public:
    DisjointSet(int Size)
        : Parent(Size, -1), Rank(Size, 0)
    {
    }

    int Find(int Node)
    {
        if (Parent[Node] == -1)
        {
            return Node;
        }

        Parent[Node] = Find(Parent[Node]);
        return Parent[Node];
    }

    void Union(int Node1, int Node2)
    {
        int Root1 = Find(Node1);
        int Root2 = Find(Node2);

        if (Rank[Root1] < Rank[Root2])
        {
            Parent[Root1] = Root2;
        }
        else if (Rank[Root1] > Rank[Root2])
        {
            Parent[Root2] = Root1;
        }
        else
        {
            Parent[Root2] = Root1;
            ++Rank[Root1];
        }
    }

    bool CycleCheck(int Node1, int Node2)
    {
        int Root1 = Find(Node1);
        int Root2 = Find(Node2);
        return Root1 == Root2;
    }

private:
    std::vector<int> Parent;
    std::vector<int> Rank;

};


int solution(int n, std::vector<std::vector<int>> costs)
{
    int answer = 0;
    std::sort(costs.begin(), costs.end(), [](const std::vector<int>& Left, const std::vector<int>& Right) {
        return Left[2] < Right[2];
        });

    DisjointSet Set(n);

    for (const std::vector<int>& Info : costs)
    {
        int Node1 = Info[0];
        int Node2 = Info[1];
        int Cost = Info[2];

        if (false == Set.CycleCheck(Node1, Node2))
        {
            Set.Union(Node1, Node2);
            answer += Cost;
        }
    }
    
    return answer;
}