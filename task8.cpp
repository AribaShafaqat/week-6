#include<iostream>
using namespace std;
float cost(string city,string product,int quantity);
main()
{
 string city,product;
 int quantity;
 cout<<"enter city"<<endl;
 cin>>city;
 cout<<"enter product"<<endl;
 cin>>product;
 cout<<"enter quantity"<<endl;
 cin>>quantity;
 float finalcost;
 finalcost=cost(city,product,quantity);
 cout<<"cost is:"<<finalcost<<endl;
 


}
float cost(string city,string product,int quantity)
{
 float cost;
 if(city=="sofia" && product=="coffee")
 {
  cost=quantity*0.50;
 }
 else if(city=="Piovdiv" && product=="coffee")
 {
  cost=quantity*0.40;
 }
 else if(city=="Varna" && product=="coffee")
 {
  cost=quantity*0.45;
 }
 else if(city=="sofia" && product=="water")
 {
  cost=quantity*0.80;
 }
 else if((city=="Piovdiv" || city=="Verna") && product=="water")
 {
  cost=quantity*0.70;
 }
 else if(city=="sofia" && product=="beer")
 {
  cost=quantity*1.20;
 }
 else if(city=="Piodiv" && product=="beer")
 {
  cost=quantity*1.15;
 }
 else if(city=="Verna" && product=="beer")
 {
  cost=quantity*1.10;
 }
 else if(city=="sofia" && product=="sweets")
 {
  cost=quantity*1.45;
 }
 else if(city=="Piodiv" && product=="sweets")
 {
  cost=quantity*1.30;
 }
 else if(city=="Verna" && product=="sweets")
 {
  cost=quantity*1.35;
 }
 else if(city=="sofia" && product=="peanuts")
 {
  cost=quantity*1.60;
 }
 else if(city=="Piodiv" && product=="peanuts")
 {
  cost=quantity*1.50;
 }
 else if(city=="Verna" && product=="peanuts")
  {
  cost=quantity*1.55;
  }
 return cost;
}
  

 

 