#include<iostream>
using namespace std;

float volume(int len, int widt , int heig, string unit) ;


int	main(){
	int lenghth, width, height ; string unit ;
	cout<<"Enter the length of the pyramid (in meters): ";
	cin>> lenghth  ;
    cout<<"Enter the width of the pyramid (in meters): ";
	cin>> width  ;
    cout<<"Enter the height of the pyramid (in meters): ";
	cin>> height  ;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin>> unit  ;
	volume(lenghth,width,height,unit) ;
}
	
	float(int len, int widt , int heig, string unit)
{
float millimeters , centimeters , meters, kilometers ;

    float volume = (len*widt*heig)/3 ;
    millimeters = volume*(1000*1000*1000) ;
    centimeters = volume*(100*100*100) ;
    meters = volume*1 ;
    kilometers = volume/(1000*1000*1000) ;
    if(unit== "millimeters")
    {
        cout<<"The volume of the pyramid is: " <<millimeters;
    }
        if(unit== "centimeters")
    {
         cout<<"The volume of the pyramid is: "<<centimeters;
    }
        if(unit== "meters")
    { 
        cout<<"The volume of the pyramid is: "<< meters;
    }
        if(unit== "kilometers")
    {
         cout<<"The volume of the pyramid is: "<<kilometers << " cubic meters";


    }


}
