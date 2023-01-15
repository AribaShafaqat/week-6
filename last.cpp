#include<iostream>
#include<cmath>
using namespace std;
main()
{
int noofholidays;
int nooftravelweekend;
float playtimeonholidays;
int notTravelweek;
float freeweeks;
float totalplay;
float playinleap;
string year;
float totalplayinleap;
cout<<"enter number of holidays.."<<endl;
cin>>noofholidays;
cout<<"enter number no travel weekend.."<<endl;
cin>>nooftravelweekend;
cout<<"enter year"<<endl;
cin>>year;
playtimeonholidays= noofholidays*0.667;
notTravelweek=48-nooftravelweekend;
freeweeks=notTravelweek*0.75;
totalplay=playtimeonholidays+freeweeks+nooftravelweekend;
totalplay=floor(totalplay);
if(year=="normal")
  {
   cout<<"total play in normal year.."<<totalplay<<endl;
  }
if(year=="leep")
  {
   playinleap=totalplay*0.15;
   totalplayinleap=playinleap+totalplay;
   totalplayinleap=floor(totalplayinleap);
   cout<<"total play in leep year is.."<<totalplayinleap<<endl;
   
}

}
