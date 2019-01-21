#include <iostream>
#include <conio.h>
#include "track.h"
#include <stdlib.h>
using namespace std;

int main()
{
    Track t;
    char move;//ievadiis kustibu
    while(1==1)
    {
        t.output();
        move=getch();
        t.move(move);
        system("cls");
    }



}
