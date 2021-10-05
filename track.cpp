#include "track.h"

Track::Track()
{
    input();

}
void Track::input()
{

    ifstream fails ( "Trase_02.txt" );
    char temp;
    int c;
    int r;

    for (r=0; r<31; r++)
    {
        for (c=0; c<58; c++)
        {
            fails.get(temp);
            if (temp!='\n')
            {
                field[c][r]=temp;
            }
            else
                c--;
        }
    }

}


void Track::output()
{
    int c;
    int r;
    for (r=0; r<31; r++) //izvade no masiva uz ekrana
    {
        cout << endl;
        for (c=0; c<58; c++)
        {
            if (field[c][r]=='@' | field[c][r]=='$')
                cout<<" ";    //@ un $ vietaa izvada atstarpi
            else
                cout <<field[c][r];
            if( k==f1.getCol()&r==f1.getRow())
            {cout<<"o"; c++;}
        }
    }
    cout<<"\ndziiviibas:"<<f1.getLives();
}
void Track::check()
{
    if (field[f1.getCol()+1][f1.getRow()]!=' '){
        f1.setRow(2);
        f1.setCol(3);
        f1.minusLives();
    }

}


bool Track::check_finish(){
    if(field[f1.getCol()+1][f1.getRow()]=='$'){
        f1.setTime_e();
        f1.setLives();
        return true;
    }
}

bool Track::check_lives(){
    if(f1.getLives())
        return true;
    else return false;
}
void Track::start()
{
    char input;
    cout<<"Kontroles: \nw ^\ns v\na <\nd >\nKad esiet gatavs,nospiediet jebkuru taustinju, lai saaktu speeli!\n";
    input=getch();
    f1.setTime_s();
    f1.setLives();
}
int Track::getTime()
{
    return (f1.getTime_e()-f1.getTime_s());
}
