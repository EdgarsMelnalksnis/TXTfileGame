#ifndef TRACK_H
#define TRACK_H
#include <iostream>
#include <fstream>
#include "formula.h"
using namespace std;


class Track
{
private:
    char laukums[41][22];//2-dimensiju masivs, kuraa glabaajas karte
    Formula f1;//tiek izveidota formula
public:
    Track();
    void input();
    void output();
    void move(char v)
    {
        f1.vadiba(v);
    }
};
Track::Track()
{
    input();

}
void Track::input()
{

    ifstream fails ( "Trase_01_beta.txt" );//fails no kura lasiit karti
    char temp;
    int k;
    int r;

    for (r=0; r<22; r++) //ievade masiivaa no faila
    {
        for (k=0; k<41; k++)
        {
            fails.get(temp);
            if (temp!='\n')
            {
                laukums[k][r]=temp;
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
    for (r=0; r<22; r++) //izvade no masiva uz ekrana
    {
        cout << endl;
        for (k=0; k<41; k++)
        {
            if (laukums[k][r]=='@'|laukums[k][r]=='$')
                cout<<" ";    //@ un $ vietaa izvada atstarpi
            else if( k==f1.getKolonna()&r==f1.getRinda())
                cout<<"o";
            else
                cout <<laukums[k][r];
        }
    }

}

#endif
