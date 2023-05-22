class Solution {
private:
    struct gridPos {
        int y;
        int x;
    };

    struct gridSize {
        int y;
        int x;
    };

    static bool isOutOfGrid(struct gridSize _gridSize, struct gridPos pos) {
        return (pos.y >= _gridSize.y || pos.x >= _gridSize.x || pos.y < 0 || pos.x < 0);
    }

    static bool isLand(vector<vector<int>> &grid, struct gridPos pos) {
        return grid[pos.y][pos.x] == 1;
    }

    static bool isWater(vector<vector<int>> &grid, struct gridPos pos) {
        return grid[pos.y][pos.x] == 0;
    }

    static bool isVisited(vector<vector<int>> &grid, struct gridPos pos) {
        return grid[pos.y][pos.x] == -1;
    }

    static void visit(vector<vector<int>> &grid, struct gridPos pos) {
        grid[pos.y][pos.x] = -1;
    }

    static void
    DFS(vector<vector<int>> &grid, queue<pair<int, int>> &BFSQueue, vector<pair<int, int>> &direction,
        struct gridSize _gridSize, struct gridPos pos) {

        if (isOutOfGrid(_gridSize, {pos.y, pos.x}) || isVisited(grid, {pos.y, pos.x}))
            return;

        if (isWater(grid, pos)) {
            BFSQueue.emplace(pos.y, pos.x);
            visit(grid, {pos.y, pos.x});
            return;
        }

        visit(grid, {pos.y, pos.x});

        for (int i = 0; i < direction.size(); ++i) {
            int directionY = direction[i].first, directionX = direction[i].second;
            struct gridPos nextPos = {pos.y + directionY, pos.x + directionX};

            DFS(grid, BFSQueue, direction, _gridSize, nextPos);
        }
    }

    static int
    BFS(vector<vector<int>> &grid, queue<pair<int, int>> &BFSQueue, vector<pair<int, int>> &direction,
        struct gridSize _gridSize) {
        int ans = 0;

        while (!BFSQueue.empty()) {
            int BFSQueueSize = BFSQueue.size();

            while (BFSQueueSize--) {
                auto currPos = BFSQueue.front();
                int posY = currPos.first, posX = currPos.second;

                BFSQueue.pop();

                for (int i = 0; i < direction.size(); ++i) {
                    int directionY = direction[i].first, directionX = direction[i].second;
                    struct gridPos nextPos = {posY + directionY, posX + directionX};

                    if (isOutOfGrid(_gridSize, nextPos) ||
                        isVisited(grid, nextPos))
                        continue;

                    if (isLand(grid, nextPos))
                        return ++ans;

                    visit(grid, nextPos);

                    BFSQueue.emplace(nextPos.y, nextPos.x);
                }
            }

            ans++;
        }

        return ans;
    }

public:
    int shortestBridge(vector<vector<int>> &grid) {
        int gridYSize = grid.size(), gridXSize = grid[0].size();
        struct gridSize _gridSize = {gridYSize, gridXSize};
        bool isFirstIslandFound = false;

        vector<pair<int, int>> direction({{0,  -1},
                                          {-1, 0},
                                          {0,  1},
                                          {1,  0}});
        queue<pair<int, int>> BFSQueue;

        for (int posY = 0; posY < _gridSize.y; ++posY) {
            for (int posX = 0; posX < _gridSize.x; ++posX) {
                struct gridPos pos = {posY, posX};

                if (isLand(grid, pos)) {
                    DFS(grid, BFSQueue, direction, _gridSize, pos);
                    isFirstIslandFound = true;
                    break;
                }
            }

            if (isFirstIslandFound)
                break;
        }

        return BFS(grid, BFSQueue, direction, _gridSize);
    }
};