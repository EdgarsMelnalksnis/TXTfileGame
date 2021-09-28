#ifndef TRACK_H
#define TRACK_H
#include <iostream>
#include <fstream>
#include "formula.h"
using namespace std;

class Track
{
    private:
        char field[41][22];//arry to store map
        Formula f1;
    public:
        Track();
        void input();
        void output();
        void move(char v)
        {
            f1.control(v);
        }
};
Track::Track()
{
    input();

}
void Track::input()
{

    ifstream fails ( "Trase_01_beta.txt" );//track file
    char temp;
    int k;
    int r;

    for (r=0; r<22; r++) 
    {
        for (k=0; k<41; k++)
        {
            fails.get(temp);
            if (temp!='\n')
            {
                field[k][r]=temp;
            }
            else
                k--;
        }
    }

}


void Track::output()
{
    int k;
    int r;
    for (r=0; r<22; r++)
    {
        cout << endl;
        for (k=0; k<41; k++)
        {
            if (field[k][r] == '@' || field[k][r] == '$')
                cout<<" ";   
            else if( k==f1.getColl() && r== f1.getRow())
                cout<<"o";
            else
                cout <<field[k][r];
        }
    }

}

#endif
