#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) 
{
    int answer = 0;
    
    std::vector<std::queue<int>> QueueBoard;
    QueueBoard.resize(board[0].size());
    
    for (int i = 0; i < board.size(); ++i)
    {
        for (int j = 0; j < board[i].size(); ++j)
        {
            if (0 != board[i][j])
            {
                QueueBoard[j].push(board[i][j]);
            }
        }
    }
    
    std::stack<int> Stack;
    
    for (int Index : moves)
    {
        if (false == QueueBoard[Index - 1].empty())
        {
            int Product = QueueBoard[Index - 1].front();
            QueueBoard[Index - 1].pop();

            if (false == Stack.empty() && Stack.top() == Product)
            {
                answer += 2;
                Stack.pop();
            }
            else
            {
                Stack.push(Product);
            }
        }
    }
    
    return answer;
}