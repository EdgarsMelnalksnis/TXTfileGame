#ifndef FORMULA_H
#define FORMULA_H
#include "baze.h"

class Formula{
private:
int rinda;
int kolonna;

public:
Formula(){
rinda=3;
kolonna=2;
}

int getRinda(){return rinda;}
int getKolonna(){return kolonna;}

void vadiba(char);
};

void Formula::vadiba(char c){
switch (c){
case 'a':
if (kolonna>0)kolonna--;
break;
case 'd':
kolonna++;
break;
case 'w':
if (rinda>0)rinda--;
break;
case 's':
rinda++;
break;
}
}

#endif
