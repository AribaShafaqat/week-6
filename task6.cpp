#include<iostream>
using namespace std;
float fare(float distance, string timing);
main()
{
 float distance;
 string timing;
  cout<<"enter distance in kilometers"<<endl;
 cin>>distance;
 cout<<"enter timing"<<endl;
 cin>>timing;
 float finalFare=fare(distance,timing);
 cout<<"your fare is : "<<finalFare;

}
float fare(float distance, string timing)
{
 float fare;
 string transport;
 if(transport=="Taxi" && timing=="Day" && distance<=1)
  {
   fare=(distance*0.70)+0.79;
  }
 else if(distance<=1 && transport=="Taxi" && timing=="Night")
  {
    fare=(distance*0.70)+0.90;
  }
 else if(distance>=20 && transport=="bus" && timing=="day"||timing=="night")
  {
  fare=distance*0.09;
  }
 else if(distance>=100 && transport=="train" && timing=="day"||timing=="night")
  {
  fare=distance*0.06;
  }
return fare;
}


