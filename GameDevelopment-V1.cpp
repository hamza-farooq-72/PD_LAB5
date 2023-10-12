#include <iostream>
#include <windows.h>
using namespace std ;

     int fX = 25 ;
    int fY = 22 ;
    int sX1 = 4  , sY1 = 15 ;
    int sX2 = 50 , sY2 = 2 ;
    int sX3 = 70 , sY3 = 18 ;

char getCharAtxy(short int x, short int y) ;
void GetAsyncKeyState() ;
void moveFarmerLeft() ;
void moveFarmerRight() ;
void moveFarmerUp() ;     
void moveFarmerDown() ;      
void erasefarmer() ; 
void printfarmer() ;
void movesnakeV1() ;
void printsnakeV1() ;
void erasesnakeV1() ;
void movesnakeD1() ;
void printsnakeD1() ;
void erasesnakeD1() ;
void movesnakeH1() ;
void printsnakeH1() ;
void erasesnakeH1() ;
void gotoxy(int x, int y);
void printMaze();





int main() {
    system("cls") ;
     int fX = 25 ;
    int fY = 22 ;
    printMaze();
    printfarmer() ;
    printsnakeV1() ;
    printsnakeH1() ;
    movesnakeD1() ; 


    while(true){

        
       


      if(GetAsyncKeyState(VK_RIGHT))
{
    moveFarmerRight()  ;
}
    if(GetAsyncKeyState(VK_LEFT))
{  
    moveFarmerLeft()  ;
    }
     if(GetAsyncKeyState(VK_UP))
{
    moveFarmerUp()   ;     
} 
    if(GetAsyncKeyState(VK_DOWN))
{  
    moveFarmerDown()  ;
    }
	   movesnakeV1() ;
        movesnakeH1() ; 
      movesnakeD1() ; 
    }


}

void moveFarmerRight() {

     if (getCharAtxy(fX + 1 , fY) == ' ')
    {
    erasefarmer() ;
    fX = fX + 1 ;
    printfarmer() ;
  Sleep(50) ; }
}

void moveFarmerLeft() {

    
    if (getCharAtxy(fX - 1 , fY) == ' ')
    {
    erasefarmer() ;
    fX = fX - 1 ;
       
    printfarmer() ;
     Sleep(50) ;}
}


  void moveFarmerDown() 
    {
        if (getCharAtxy(fX  , fY + 11) == ' ')
    {
    erasefarmer() ;
    fY = fY + 1 ;
       
    printfarmer() ;
     Sleep(50) ;}
    }


 void moveFarmerUp() 
    {
        if (getCharAtxy(fX  , fY - 1) == ' ')
    {
    erasefarmer() ;
    fY = fY - 1 ;
       
    printfarmer() ;
     Sleep(50) ;}

    
    
    }


    void movesnakeV1()
{
     printsnakeV1() ;
     Sleep(100) ; 

    erasesnakeV1() ; 

     sY1 = sY1 + 1 ;
        if(sY1 >= 27){
            sY1 = 12 ;
        }
       Sleep(100) ;

    

}


void printsnakeV1() {

    gotoxy(sX1 , sY1) ;

    cout << "   /\\_/\\ "  ;
    gotoxy(sX1,sY1 + 1)   ;
    cout << "  ( o o ) "   ;
    gotoxy(sX1,sY1 + 2)  ;
    cout << "   (   )  "   ;
    gotoxy(sX1,sY1 + 3) ;
    cout << "    (_)   "  ;

}

void erasesnakeV1() {

    gotoxy(sX1,sY1) ;

    cout << "             "  ;
    gotoxy(sX1,sY1 + 1) ;
    cout << "          "  ;
    gotoxy(sX1,sY1 + 2) ;
    cout << "          "   ;
    gotoxy(sX1,sY1 + 3) ;
    cout << "          "  ;

}


        void movesnakeH1()
    {
        printsnakeH1() ;
        Sleep(200) ;

      erasesnakeH1() ;

       sX2 = sX2 + 1  ;
        if(sX2 == 75)
    {     sX2 = 50 ;   }

       Sleep(200) ;
    }


void printsnakeH1() {

    gotoxy(sX2 , sY2) ;
    cout << "   /\\_/\\ " ;
    gotoxy(sX2 ,sY2 + 1) ;
    cout << "  ( o o ) " ;
    gotoxy(sX2  ,sY2 + 2)  ;
    cout << "   (   )  ";
    gotoxy(sX2  ,sY2 + 3) ;
    cout << "    (_)   ";
}


    
void erasesnakeH1() {

    gotoxy(sX2 ,sY2) ;
    cout << "            " ;
    gotoxy(sX2 ,sY2 + 1) ;
    cout << "              " ;
    gotoxy(sX2 ,sY2 + 2) ;
    cout << "              " ;
    gotoxy(sX2 ,sY2 + 3) ;
    cout << "              "  ; 

}


        void movesnakeD1()
    {
         printsnakeD1() ;

             Sleep(300) ; 

         erasesnakeD1() ;
        
    sX3 = sX3 +1 , sY3 = sY3 + 1 ;
       if(sX3 = 25 )
    {
        sX3 = 65 , sY3 = 18 ; }
       
        Sleep(300) ; 
    
    }

void printsnakeD1() {
    gotoxy(sX3, sY3) ;
    cout << " /\\_/\\ " << endl;
    gotoxy(sX3 + 1 , sY3 + 1)  ;
    cout << "( o o ) " << endl;
    gotoxy(sX3 + 2, sY3 + 2) ;
    cout << " (   )  " <<  endl;
     gotoxy(sX3  + 3 , sY3 + 3) ;
    cout << "  (_)   " << endl;
}


void erasesnakeD1() {

    gotoxy(sX3, sY3) ;
    cout << "           " << endl;
    gotoxy(sX3 + 1 , sY3 + 1) ;
    cout << "         " << endl;
    gotoxy(sX3 + 2, sY3 + 2) ;
    cout << "         " <<  endl;
     gotoxy(sX3 + 3 , sY3 + 3) ;
    cout << "         " << endl;
}









void printfarmer() {
    gotoxy(fX,fY);
    cout << "  ~~~~~~~~~" <<endl;
    gotoxy(fX,fY+1);
    cout << " |  o  o  |" <<endl;
    gotoxy(fX,fY+2);
    cout << " |   ^    |" <<endl;
    gotoxy(fX,fY+3);
    cout << " |  ---   |" <<endl;
    gotoxy(fX,fY+4);
    cout << "  \\______/" <<endl;
    gotoxy(fX,fY+5);
    cout << "   |    |" <<endl;
    gotoxy(fX,fY+6);
    cout << "  /|\\  /|\\" <<endl;
    gotoxy(fX,fY+7);
    cout << " / | \\/ | \\" <<endl;
    gotoxy(fX,fY+8);
    cout << "    |  |" <<endl;
    gotoxy(fX,fY+9);
    cout << "   /   \\" << endl;
}

void erasefarmer() 
{
    gotoxy(fX,fY);
    cout << "            " <<endl;
    gotoxy(fX,fY+1);
    cout << "              " <<endl;
    gotoxy(fX,fY+2);
    cout << "            " <<endl;
    gotoxy(fX,fY+3);
    cout << "            " <<endl;
    gotoxy(fX,fY+4);
    cout << "             " <<endl;
    gotoxy(fX,fY+5);
    cout << "           " <<endl;
    gotoxy(fX,fY+6);
    cout << "             " <<endl;
    gotoxy(fX,fY+7);
    cout << "              " <<endl;
    gotoxy(fX,fY+8);
    cout << "            " <<endl;
    gotoxy(fX,fY+9);
    cout << "            " << endl; 

}













char getCharAtxy(short int x, short int y)
{   

     CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
:   ' ';
}



void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x ;
coordinates.Y = y ;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}




void printMaze()
{
cout<<"  #########################################################################################   "<<endl;
cout<<"  #---------------------------------------------------------------------------------------#   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  # --------------------------------------------------------------------------------------#   "<<endl;
cout<<"  #########################################################################################   "<<endl;
}



