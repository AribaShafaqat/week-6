#include<iostream>
using namespace std;
string speedd(float speeed);
main()
{
 float speed;
 cout<<"Enter speed"<<endl;
 cin>>speed;
 string title;
 title=speedd(speed);
 cout<<"your speed is: "<<title;
}
string speedd(float speeed)
{
 string speed;
 if(speeed<10)
 {
  speed="slow";
 }
 else if(speeed>=10 && speeed<=50)
 {
  speed="average";
 }
 else if(speeed>=50 && speeed<=150)
 {
  speed="fast";
 }
 else if(speeed>=150 && speeed<=1000)
 {
 speed="ultra fast";
 }
 else
 {
  speed="extremely fast";
 }
return speed;
}