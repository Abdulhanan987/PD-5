#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void printmaze();
void gotoxy(int x,int y);
void printPlayer();
void removePlayer();
void enemy1();
void Eraseenemy1();
void enemy2();
void erasep2 ();
void enemy3();
void erasep3();
void moveRight();
void moveLeft();
void moveUp();
void moveDown();
void moveenemey1();
void moveenemy2();
char getCharAtxy(short int x, short int y);
int px=15,py =15;
int ex=2,ey=2;
int ex2 = 65,ey2 = 2;
int ex1=30,ey1=2;
main()
{                                                                                           
  system("cls");
  printmaze();
  printPlayer();
  enemy1();
  enemy2();
 enemy3();
     while(true)
   {
      if(GetAsyncKeyState(VK_LEFT))
      {
         moveLeft();
      }
      if(GetAsyncKeyState(VK_RIGHT))
      {
         moveRight();
      }
      if(GetAsyncKeyState(VK_UP))
      {
         moveUp();
      }
      if(GetAsyncKeyState(VK_DOWN))
      {
         moveDown();
      }
      Sleep(200);
  

   }
  }
void printmaze()
{
    cout<<"#########################################################################################"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#                                                                                       #"<<endl;
    cout<<"#########################################################################################"<<endl;                                                                
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0,0};
    SMALL_RECT rect = {x,y,x,y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci, coordBufSize,xy,&rect) ?ci.Char.AsciiChar
    : ' ' ; }


void printPlayer()
{       int px=15,py =15;
      gotoxy(px,py);
 cout<<"   (____)     "<<endl;
        gotoxy(px,py+1);
 cout<<"    (OO)      "<<endl;
      gotoxy(px,py+2);
 cout<<"  /------\\   "<<endl;
     gotoxy(px,py+3);
 cout<<"/ /|     |\\\\"<<endl;
     gotoxy(px,py+4);
 cout<<" (_)|     |(_)"<<endl;
    gotoxy(px,py+5);
 cout<<"  (_)   (_)   " <<endl;       
        
       
}
void removePlayer()
{      int px=15,py =15;
      gotoxy(px,py);
 cout<<"              "<<endl;
      gotoxy(px,py+1);
 cout<<"              "<<endl;
         gotoxy(px,py+2);
 cout<<"              "<<endl;
    gotoxy(px,py+3);
 cout<<"              "<<endl;
      gotoxy(px,py+4);
 cout<<"              "<<endl;
       gotoxy(px,py+5);
    
 cout<<"              "<<endl;
     
}

void moveRight()
{      if (getCharAtxy(px+30,py)== ' ')
      {  removePlayer();

      px=px + 1;
     printPlayer();
      }
}
void moveLeft()
{     if (getCharAtxy(px-1,py)== ' ')
    {removePlayer();
    px = px - 1;
    printPlayer();}

}
void moveUp()
{    if (getCharAtxy(px,py-1)== ' ')
   { removePlayer();
    py = py -1;
    printPlayer();   }
}
void moveDown()
{   if(getCharAtxy(px , py+6)==' ')
    removePlayer();
    py = py +1;
    printPlayer();
}


void enemy1()
{            int ex=2,ey=2;
      gotoxy(ex,ey);
      cout<<"  /\\ " << endl;
       gotoxy(ex,ey+1);
    cout << " /  \\" << endl;
       gotoxy(ex,ey+2);
    cout << "|====|" << endl;
    gotoxy(ex,ey+3);
    cout << "|    |" << endl;
      gotoxy(ex,ey+4);
    cout << "|    |" << endl;
     gotoxy(ex,ey+5);
    cout << "|====|" << endl;
       gotoxy(ex,ey+6);
    cout << " \\  /" << endl;
    gotoxy(ex,ey+7);
    cout << "  \\/ " << endl;
}
void  Eraseenemy1()
{
     int ex=2,ey=2;
     gotoxy(ex,ey);
     cout<<"      "<<endl;
     gotoxy(ex,ey+1);
     cout<<"      "<<endl;
     gotoxy(ex,ey+2);
     cout<<"      "<<endl;
     gotoxy(ex,ey+3);
     cout<<"      "<<endl;
     gotoxy(ex,ey+4);
     cout<<"      "<<endl;
     gotoxy(ex,ey+5);
     cout<<"      "<<endl;
     gotoxy(ex,ey+6);
     cout<<"      "<<endl;
     gotoxy(ex,ey+7);
     cout<<"      "<<endl;
}
void enemy2()
{ int ex1=30,ey1=2;
      gotoxy(ex1,ey1);
      cout<<"  /\\  " << endl;
       gotoxy(ex1,ey1+1);
    cout << " /  \\ " << endl;
       gotoxy(ex1,ey1+2);
    cout << "|====|" << endl;
    gotoxy(ex1,ey1+3);
    cout << "|    |" << endl;
      gotoxy(ex1,ey1+4);
    cout << "|    |" << endl;
     gotoxy(ex1,ey1+5);
    cout << "|====|" << endl;
       gotoxy(ex1,ey1+6);
    cout << " \\  / " << endl;
    gotoxy(ex1,ey1+7);
    cout << "  \\/  " << endl;

}
void erasep2 ()
{
    int ex1 = 30,ey1 = 2;
    gotoxy(ex1,ey1);
       cout<<"     ";
    gotoxy(ex1,ey1+1);
       cout<<"     ";
    gotoxy(ex1,ey1+2);
       cout<<"      ";
    gotoxy(ex1,ey1+3);
       cout<<"      ";
    gotoxy(ex1,ey1+4);
      cout<<"      ";
    gotoxy(ex1,ey1+5);
       cout<<"      ";
    gotoxy(ex1,ey1+6);
       cout<<"     ";
    gotoxy(ex1,ey1+7);
       cout<<"     ";


}
void enemy3()
{      int ex2 = 65,ey2 = 2;
     gotoxy(ex2,ey2);
      cout<<"  /\\  " << endl;
       gotoxy(ex2,ey2+1);
    cout << " /  \\ " << endl;
       gotoxy(ex2,ey2+2);
    cout << "|====|" << endl;
    gotoxy(ex2,ey2+3);
    cout << "|    |" << endl;
      gotoxy(ex2,ey2+4);
    cout << "|    |" << endl;
     gotoxy(ex2,ey2+5);
    cout << "|====|" << endl;
       gotoxy(ex2,ey2+6);
    cout << " \\  / " << endl;
    gotoxy(ex2,ey2+7);
    cout << "  \\/  " << endl;


}
void erasep3()
{      int ex2 = 65,ey2 = 2;
     gotoxy(ex2,ey2);
       cout<<"     ";
    gotoxy(ex2,ey2+1);
       cout<<"     ";
    gotoxy(ex2,ey2+2);
       cout<<"      ";
    gotoxy(ex2,ey2+3);
       cout<<"      ";
    gotoxy(ex2,ey2+4);
       cout<<"      ";
    gotoxy(ex2,ey2+5);
       cout<<"      ";
    gotoxy(ex2,ey2+6);
       cout<<"     ";
    gotoxy(ex2,ey2+7);
       cout<<"     ";
}



void moveenemey1()
{      
  
    Eraseenemy1();
    ex = ex + 1;
    if (ex==90)
    {
        ex = 2;
    }
    enemy1();   
}
void moveenemy2()
{     

    erasep2();
    ey = ey +1;
    if (ey ==23)
    {
        ey =2;
    }
    enemy2();     

}
