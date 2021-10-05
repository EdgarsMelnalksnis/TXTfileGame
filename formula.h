#ifndef FORMULA_H
#define FORMULA_H
#include "baze.h"
#include <ctime>
class Formula
{
    private:
        int row;
        int col;
        int time_s;//start time
        int time_e;//end time
        int speed;
        int lives;
    public:
        Formula()
        {
            row=3;//formula atrasanas vieta pec noklusejuma
            col=2;
            speed=1;
            lives=3;
        }

        int getRow();
        int getCol();       
        int getSpeed();    
        int getLives();
        void setRow(int r); 
        void setCol(int c);
        void setLives();
        void minusLives();
        void plusLives();
        void setTime_s();
        void setTime_e();
        int getTime_s();
        int getTime_e();
        void setSpeed(bool b);
        void move(char);
};

#endif
