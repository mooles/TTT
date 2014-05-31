#pragma once
#include <SFML/Graphics.hpp>

/*
*  0 - nothing
*  1 - X
*  2 - O
*/
class Grid
{
public:
	Grid();
	void setType(int, int, int);




private:
	int r, c;
	int grid[3][3];
};