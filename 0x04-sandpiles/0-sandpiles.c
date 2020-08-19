#include "sandpiles.h"

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int rows, cols;

	for (rows = 0; rows < 3; rows++)
	{
		for (cols = 0; cols < 3; cols++)
		{
			grid1[rows][cols] += grid2[rows][cols];
		}
	}
}
