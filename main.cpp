#include <iostream>
#include <conio.h>
#include "track.h"
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{


    Track t;
    char dir;
    bool cont;
    t.start();
    system("cls");
    while(cont)
    {
        t.output();

        dir=getch();
        t.move(virziens);

        if(t.check_finish())
        {
            cout<<"\n\n\nFinish! laiks:"<<t.getTime()<<" sekundes!\n"<<"Vai velaties sakt no jauna? 1-jaa, 0-nee\n";
            cin>>cont;
            t.start();
            system("cls");
        }
        t.check();
        if(t.check_lives())
        {
            cout<<"\niztereetas visas dziiviibas!"<<" Vai velaties sakt no jauna ? 1-jaa, 0-nee\n";
            cin>>cont;
            t.start();
            system("cls");
        }
        system("cls");
    }



}
