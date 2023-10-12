#include<iostream>
using namespace std;

void timecollector(int hours, int days,int workers) ;
	main(){

    int hours, days, workers ;
    cout<<"Enter the needed hours: ";
	cin>> hours  ;
    cout<<"Enter the days that the firm has: ";
	cin>> days  ;
    cout<<"Enter the number of all workers: ";
	cin>> workers  ;
    
   timecollector(hours,days,workers) ;
    
    }
 void timecollector(int hours, int days,int workers)
 {float workingDays = days - days*(10.0/100.0) ;
 float totalWorkingTime = workingDays*10*workers ;
 int time , time1 ;
    if(totalWorkingTime>hours)
    {time = totalWorkingTime - hours ;
    cout<<"Yes! " << time <<" hours left." ;
 }

    if(totalWorkingTime<hours)
    {
    time1 = hours - totalWorkingTime  ;
    cout<<"Not enough time! " << time1 <<" hours needed." ;

 }
 }