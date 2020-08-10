class Solution {
public:
    int maxX, maxY;
    bool hasRottenNeighbour(vector<vector<int>>& grid, int x, int y) {
        // checking for for rotten neighbours left, up, right and down
        return (x && grid[y][x - 1] == 2) + (y && grid[y - 1][x] == 2) + (x < maxX && grid[y][x + 1] == 2) + (y < maxY && grid[y + 1][x] == 2);
    }
    int orangesRotting(vector<vector<int>>& grid) {
        maxY = grid.size() - 1, maxX = grid[0].size() - 1;
        int res = 0, x, y;
        bool hasRotten;
        vector<pair<int, int>> toRot, prevFresh, currFresh;
        // looping through the grid to find the fresh ones
        for (int y = 0; y <= maxY; y++) {
            for (int x = 0; x <= maxX; x++) {
                if (grid[y][x] == 1) currFresh.push_back({x, y});
            }
        }
        do {
            prevFresh = currFresh;
            // resetting tracking variables
            hasRotten = false;
            toRot.clear();
            currFresh.clear();
            // looping only through all the fresh oranges from the previous tick
            for (auto e: prevFresh) {
                x = e.first;
                y = e.second;
                if (hasRottenNeighbour(grid, x, y)) {
                    toRot.push_back({x, y});
                    hasRotten = true;
                }
                else currFresh.push_back({x, y});
            }
            // updating the grid with the oranges that should rot at this tick
            for (auto e: toRot) grid[e.second][e.first] = 2;
            res += hasRotten;
        } while (hasRotten);
        return currFresh.size() ? -1 : res;
    }
};
