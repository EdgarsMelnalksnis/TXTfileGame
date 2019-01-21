#ifndef BAZE_H
#define BAZE_H
#include<iostream>
using namespace std;
class Baze
{
private:
    int rinda;
    int kolonna;

public:
    Baze()
    {
        rinda=0;
        kolonna=0;
    }
    void set_r(int r)
    {
        rinda=r;
    }
    void set_k(int k)
    {
        kolonna=k;
    }


};





#endif
