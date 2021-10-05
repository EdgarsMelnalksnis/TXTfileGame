#include "formula.h"
void Formula::move(char c)
{
    switch (c)
    {
        case 'a':
            col--;
            break;
        case 'd':
            col++;
            break;
        case 'w':
            row--;
            break;
        case 's':
            row++;
            break;
    }
}

