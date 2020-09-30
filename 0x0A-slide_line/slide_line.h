#ifndef SLIDE_LINE_H
#define SLIDE_LINE_H

#include <stddef.h>

#define SLIDE_LEFT 0
#define SLIDE_RIGHT 1

int slide_line(int *line, size_t size, int direction);
void slide_left(int *, size_t);
void slide_right(int *, size_t);

#endif /* SLIDE_LINE_H */
