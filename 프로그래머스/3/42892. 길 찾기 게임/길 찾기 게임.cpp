#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool Compare(const pair<pair<int, int>, int>& Left, const pair<pair<int, int>, int>& Right)
{
    if (Left.first.second == Right.first.second)
    {
        return Left.first.first < Right.first.first;        
    }
    return Left.first.second > Right.first.second;
}

class Node
{
public:
    Node(int _X, int _Y, int _Value)
        : X(_X), Y(_Y), Value(_Value), Left(nullptr), Right(nullptr)
    {
    }

public:
    int X;
    int Y;
    int Value;
    Node* Left;
    Node* Right;
};

class BinaryTree
{
public:
    BinaryTree()
        : Root(nullptr)
    {
    }

    void Insert(int _X, int _Y, int _Value)
    {
        Root = InsertNode(Root, _X, _Y, _Value);
    }

    std::vector<int> PreOrder()
    {
        std::vector<int> Result;
        DoPreOrder(Root, Result);
        return Result;
    }

    std::vector<int> PostOrder()
    {
        std::vector<int> Result;
        DoPostOrder(Root, Result);
        return Result;
    }

private:
    Node* InsertNode(Node* node, int _X, int _Y, int _Value)
    {
        if (nullptr == node)
        {
            return new Node(_X, _Y, _Value);
        }

        if (_X < node->X)
        {
            node->Left = InsertNode(node->Left, _X, _Y, _Value);
        }
        else
        {
            node->Right = InsertNode(node->Right, _X, _Y, _Value);
        }
        return node;
    }

    void DoPreOrder(Node* node, std::vector<int>& Result)
    {
        if (node == nullptr)
        {
            return;
        }
        Result.push_back(node->Value);
        DoPreOrder(node->Left, Result);
        DoPreOrder(node->Right, Result);
    }
    
    void DoPostOrder(Node* node, std::vector<int>& Result)
    {
        if (node == nullptr)
        {
            return;
        }
        DoPostOrder(node->Left, Result);
        DoPostOrder(node->Right, Result);
        Result.push_back(node->Value);
    }

private:
    Node* Root;

};


vector<vector<int>> solution(vector<vector<int>> nodeinfo)
{
    vector<vector<int>> answer;
    answer.resize(2);
    vector<pair<pair<int, int>, int>> nodes;
    for (int i = 0; i < nodeinfo.size(); ++i)
    {
        nodes.push_back({ {nodeinfo[i][0], nodeinfo[i][1]}, i + 1 });
    }
    sort(nodes.begin(), nodes.end(), Compare);

    BinaryTree BT;
    for (const auto& node : nodes)
    {
        BT.Insert(node.first.first, node.first.second, node.second);
    }
    
    answer[0] = BT.PreOrder();
    answer[1] = BT.PostOrder();


    return answer;
}