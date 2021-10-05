#ifndef TRACK_H
#define TRACK_H
#include <iostream>
#include <fstream>
#include <conio.h>
#include "formula.h"
using namespace std;


class Track
{
    private:
        char field[58][31];//2-dimensiju masivs, kuraa glabaajas karte
        Formula f1;//tiek izveidota formula
    public:
        Track();
        void input();
        void output();
        void move(char v){f1.move(v);}
        void check();
        bool check_finish();
        bool check_lives();
        void start();
        int getTime();
};

#endif
