#include "Grid.h"
#include <SFML/Graphics.hpp>


Grid::Grid()
{
	//fill grid with 0s
	for (int j = 0; j <= 2; j++)
	{
		for (int k = 0; k <= 2; k++)
		{
			grid[j][k] = 0;
		}
	}
}

/*
*  0 - nothing
*  1 - X
*  2 - O
*/
void Grid::setType(int r, int c, int type)
{
	grid[r][c] = type;
}