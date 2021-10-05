#ifndef BAZE_H
#define BAZE_H
#include<iostream>
using namespace std;
class Baze{
    private:
        int row;
        int col;

    public:
        Baze()
        {
            row=0;
            col=0;
        }
        void set_r(int r){row=r;}
        void set_c(int c){col=c;}


};





#endif
