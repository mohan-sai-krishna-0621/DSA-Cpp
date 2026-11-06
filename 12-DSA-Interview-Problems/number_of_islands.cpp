#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<char>>& grid, int r, int c) {
    int rows = grid.size();
    int cols = grid[0].size();

    if (r < 0 || c < 0 || r >= rows ||
        c >= cols || grid[r][c] == '0') {
        return;
    }

    // Mark visited land
    grid[r][c] = '0';

    // Visit all four directions
    dfs(grid, r + 1, c);
    dfs(grid, r - 1, c);
    dfs(grid, r, c + 1);
    dfs(grid, r, c - 1);
}

int main() {
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };

    int islands = 0;

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {

            if (grid[i][j] == '1') {
                islands++;
                dfs(grid, i, j);
            }
        }
    }

    cout << "Number of Islands: " << islands;

    return 0;
}
