#include<iostream>
using namespace std;

void taxcollector(int Price, char Code) ;
	main(){
	float price;
    char code ;

    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
	cin>> code  ;

	cout<<"Enter the price of the vehicle: $";
	cin>> price  ;

	
    taxcollector(price,code) ;
}
	
void taxcollector(int Price, char Code) 
{
  float  Motorcycle, Electric, Sedan, Van, Truck  ;

    Motorcycle =Price + Price*(6.0/100.0) ;
    Electric =Price + Price*(8.0/100.0) ;
    Sedan = Price + Price*(10.0/100.0) ;
    Van = Price + Price*(12.0/100.0) ;
    Truck = Price + Price*(15.0/100.0) ;

        if(Code=='M')
    {
        cout<<"The final price of a vehicle of type M after adding the tax is " << Motorcycle  ;
    }
        if(Code=='E')
    {
         cout<<"The final price of a vehicle of type E after adding the tax is " << Electric  ;
    }
        if(Code== 'S')
    { 
          cout<<"The final price of a vehicle of type S after adding the tax is " << Sedan ;
    }
        if(Code== 'V')
    {
           cout<<"The final price of a vehicle of type V after adding the tax is " << Van  ;
    }
        if(Code== 'T')
    {
         cout<<"The final price of a vehicle of type T after adding the tax is " << Truck ;
    }

}
