#include "menger.h"
/**
 * menger - draws a 2D Menger Sponge
 * @level: is the level of the Menger Sponge to draw
 */
void menger(int level)
{
	int row, column, size;
	char Char;

	size = pow(3, level);

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			Char = characters(row, column);
			printf("%c", Char);
		}
		printf("\n");
	}
}
/**
 * characters - draws a character
 * @row:	number of row
 * @column:	number of columns
 * Return:	character # or empty
 */
char characters(int row, int column)
{
	while (row || column)
	{
		if (row % 3 == 1 && column % 3 == 1)
			return (' ');
		row /= 3;
		column /= 3;
	}
	return ('#');
}
