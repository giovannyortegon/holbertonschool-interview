#include "slide_line.h"
/**
 * slide_line - slide & merge it to the left or to the right.
 * @line:	points to an array of integers.
 * @size:	number of elements.
 * @direction:	represent left or right direction.
 * Return:	Always 1 upon success.
 */
int slide_line(int *line, size_t size, int direction)
{
	if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
		return (0);

	if (direction == 0)
		slice_left(line, size);
	else
		slice_right(line, size);

	return (1);
}
/**
 * slide_left - slide & merge it to the left.
 * @line:	points to an array of integers.
 * @size:	number of elements.
 */
void slide_left(int *line, size_t size)
{
	size_t i, j, k;

	for (i = j = 0; i < size; i++, j++)
	{
		if (line[i] == 0)
			for (; line[i] == 0; i++)
				;

		j = i + 1;

		if (line[j] == 0)
			for (; line[j] == 0; j++)
				;

		if (line[i] == line[j])
		{
			line[i] = line[i] * 2;
			line[j] = 0;
			i = j + 1;
		}
		else
			i++;

		j = 0;
	}

	for (i = k = 0; i < size; i++)
	{
		if (line[i] != 0)
			line[k++] = line[i];
	}

	for (; k < size; k++)
		line[k] = 0;
}
/**
 * slide_right - slide & merge it to the right.
 * @line:	points to an array of integers.
 * @size:	number of elements.
 */
void slide_right(int *line, size_t size)
{
	size_t i, j;

	for (i = size; i > 0; i--)
	{
		for (j = i - 1; j > 0; j--)
		{
			if (line[i - 1] != 0)
			{
				if (line[i - 1] == line[j - 1])
				{
					line[i - 1] = line[i - 1] * 2;
					line[j - 1] = 0;
					break;
				}
				else
				{
					if (line[j - 1] != 0)
						break;
				}
			}
			else
			{
				if (line[j - 1] != 0)
				{
					line[i - 1] = line[j - 1];
					line[j - 1] = 0;
					i++;
					break;
				}
			}
		}
	}
}
