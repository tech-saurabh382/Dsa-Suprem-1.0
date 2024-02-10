// LeetCode Problem
// 51. N-Queens -> https://leetcode.com/problems/n-queens/description/

// Question Description

// The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

// Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

// Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

// Example 1:

// Input: n = 4
// Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
// Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
// Example 2:

// Input: n = 1
// Output: [["Q"]]

// Constraints:

// 1 <= n <= 9

// ******* Solution *******

class Solution
{
public:
    unordered_map<int, bool> rowCheck;
    unordered_map<int, bool> upperLeftDiagnolCheck;
    unordered_map<int, bool> bottomLeftDiagnolCheck;

    void storeSolution(vector<vector<char>> &board, int n, vector<vector<string>> &ans)
    {
        vector<string> temp;
        for (int i = 0; i < n; i++)
        {
            string output = "";
            for (int j = 0; j < n; j++)
            {
                output.push_back(board[i][j]);
            }
            temp.push_back(output);
        }
        ans.push_back(temp);
    }

    bool isSafe(int row, int col, vector<vector<char>> &board, int n)
    {

        if (rowCheck[row] == true)
        {
            return false;
        }

        if (upperLeftDiagnolCheck[n - 1 + col - row] == true)
        {
            return false;
        }

        if (bottomLeftDiagnolCheck[row + col] == true)
        {
            return false;
        }

        return true;

        // check karna chahte h, k kya main
        // current cell [row,col] pr QUEEN rakh
        // rakh sakta hu ya nahi

        // int i = row;
        // int j = col;

        // // check row
        // while (j >= 0)
        // {
        //     if (board[i][j] == 'Q')
        //     {
        //         return false;
        //     }
        //     j--;
        // }

        // // check upper left diagnol
        // i = row;
        // j = col;
        // while (i >= 0 && j >= 0)
        // {
        //     if (board[i][j] == 'Q')
        //     {
        //         return false;
        //     }
        //     i--;
        //     j--;
        // }

        // // check bottom left diagonal
        // i = row;
        // j = col;
        // while (i < n && j >= 0)
        // {
        //     if (board[i][j] == 'Q')
        //     {
        //         return false;
        //     }
        //     i++;
        //     j--;
        // }

        // // kahin pr bhi queen nahi mili
        // // iska matlab ye position safe hai
        // // iska matlab return kardo true

        // return true;
    }

    void solve(vector<vector<char>> &board, int col, int n, vector<vector<string>> &ans)
    {
        // base case
        if (col >= n)
        {
            storeSolution(board, n, ans);
            return;
        }

        // 1 case solve karna h, baki recursion sambhal lega

        for (int row = 0; row < n; row++)
        {
            if (isSafe(row, col, board, n))
            {
                // rakh do
                board[row][col] = 'Q';
                rowCheck[row] = true;
                upperLeftDiagnolCheck[n - 1 + col - row] = true;
                bottomLeftDiagnolCheck[row + col] = true;
                // recursion solution laega
                solve(board, col + 1, n, ans);
                // backtrack
                board[row][col] = '.';
                rowCheck[row] = false;
                upperLeftDiagnolCheck[n - 1 + col - row] = false;
                bottomLeftDiagnolCheck[row + col] = false;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<char>> board(n, vector<char>(n, '.'));
        vector<vector<string>> ans;
        int col = 0;
        // 0 -> empty cell
        // 1 -> Queen at cell

        solve(board, col, n, ans);
        return ans;
    }
};
