#ifndef FORMULA_H
#define FORMULA_H
#include "baze.h"

class Formula
{
    private:
        int row;
        int coll;

    public:
        Formula()
        {
            row=3;
            coll=2;
        }

        int getRow()
        {
            return row;
        }
        int getColl()
        {
            return coll;
        }

        void control(char);
};

void Formula::control(char c)
{
    switch (c)
    {
        case 'a':
            if (coll>0)coll--;
            break;
        case 'd':
            coll++;
            break;
        case 'w':
            if (row>0)row--;
            break;
        case 's':
            row++;
            break;
    }
}

#endif
