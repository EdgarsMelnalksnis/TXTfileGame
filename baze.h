#ifndef BAZE_H
#define BAZE_H
#include<iostream>
using namespace std;
class Baze
{
    private:
        int row;
        int coll;

    public:
        Baze()
        {
            row=0;
            coll=0;
        }
        void setRow(int r)
        {
            row=r;
        }
        void setColl(int k)
        {
            coll=k;
        }
};

#endif
