// GFG Problem no.
// Rat in a Maze Problem - I -> https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

// Question Description

// Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
// Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.

// Example 1:

// Input:
// N = 4
// m[][] = {{1, 0, 0, 0},
//          {1, 1, 0, 1},
//          {1, 1, 0, 0},
//          {0, 1, 1, 1}}
// Output:
// DDRDRR DRDDRR
// Explanation:
// The rat can reach the destination at
// (3, 3) from (0, 0) by two paths - DRDDRR
// and DDRDRR, when printed in sorted order
// we get DDRDRR DRDDRR.
// Example 2:
// Input:
// N = 2
// m[][] = {{1, 0},
//          {1, 0}}
// Output:
// -1
// Explanation:
// No path exists and destination cell is
// blocked.
// Your Task:
// You don't need to read input or print anything. Complete the function printPath() which takes N and 2D array m[ ][ ] as input parameters and returns the list of paths in lexicographically increasing order.
// Note: In case of no path, return an empty list. The driver will output "-1" automatically.

// Expected Time Complexity: O((3N^2)).
// Expected Auxiliary Space: O(L * X), L = length of the path, X = number of paths.

// Constraints:
// 2 ≤ N ≤ 5
// 0 ≤ m[i][j] ≤ 1

// ******** Solution ********

class Solution
{
public:
    int dx[4] = {1, 0, 0, -1};
    int dy[4] = {0, -1, 1, 0};
    char direction[4] = {'D', 'L', 'R', 'U'};

    bool isSafe(int i, int j, int row, int col, vector<vector<int>> &arr, vector<vector<bool>> &visited)
    {
        if (((i >= 0 && i < row) && (j >= 0 && j < col)) && (arr[i][j] == 1) && (visited[i][j] == false))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void solveMaze(vector<vector<int>> &arr, int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output)
    {
        // Base Case
        if (i == row - 1 && j == col - 1)
        {
            // answer found
            path.push_back(output);
            return;
        }

        for (int k = 0; k < 4; k++)
        {
            int newx = i + dx[k];
            int newy = j + dy[k];
            char dir = direction[k];

            if (isSafe(newx, newy, row, col, arr, visited))
            {
                visited[newx][newy] = true;
                solveMaze(arr, row, col, newx, newy, visited, path, output + dir);
                // backtrack
                visited[newx][newy] = false;
            }
        }

        // // Down -> i+1, j
        // if (isSafe(i + 1, j, row, col, arr, visited))
        // {
        //     visited[i + 1][j] = true;
        //     solveMaze(arr, row, col, i + 1, j, visited, path, output + "D");
        //     // Backtrack
        //     visited[i + 1][j] = false;
        // }

        // // Left -> i, j-1
        // if (isSafe(i, j - 1, row, col, arr, visited))
        // {
        //     visited[i][j - 1] = true;
        //     solveMaze(arr, row, col, i, j - 1, visited, path, output + "L");
        //     // Backtrack
        //     visited[i][j - 1] = false;
        // }

        // // Right -> i, j+1
        // if (isSafe(i, j + 1, row, col, arr, visited))
        // {
        //     visited[i][j + 1] = true;
        //     solveMaze(arr, row, col, i, j + 1, visited, path, output + "R");
        //     // Backtrack
        //     visited[i][j + 1] = false;
        // }

        // // Up -> i-1, j
        // if (isSafe(i - 1, j, row, col, arr, visited))
        // {
        //     visited[i - 1][j] = true;
        //     solveMaze(arr, row, col, i - 1, j, visited, path, output + "U");
        //     // Backtrack
        //     visited[i - 1][j] = false;
        // }
    }

    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here

        int row = n;
        int col = n;

        vector<string> path;
        string output = "";
        vector<vector<bool>> visited(row, vector<bool>(col, false));
        if (m[0][0] == 0)
        {
            return path;
        }
        // src ki value k true mark kredete h
        visited[0][0] = true;

        solveMaze(m, row, col, 0, 0, visited, path, output);

        return path;
    }
};