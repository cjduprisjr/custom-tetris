#pragma once

class Grid
{
public:
    Grid();
    void Initialize();
    int grid[20][10];
private:
    int numRows;
    int numCols;
    int cellSize;
};