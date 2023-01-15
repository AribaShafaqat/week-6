#include<iostream>
using namespace std;
float budgetcost(float budget,float people,string category);
main()
{
 float budget;
 string category;
 int people;
 cout<<"Enter budget"<<endl;
 cin>>budget;
 cout<<"Enter category of Ticket"<<endl;
 cin>>category;
 cout<<"Enter number of people"<<endl;
 cin>>people;
 float budg=budgetcost(budget,people,category);
 if(budg>0)
 cout<<"Yes you can watch match. You have"<<budg<<endl;
 else
 cout<<"You cannot watch match. Need money!!"<<endl;


}
float budgetcost(float budget,float people,string category)
{
 
 float cost;
 float transportation;
 float ticket;
 if(category=="VIP" && people<=4)
  {
   transportation=budget-budget*75/100;
   ticket=499.99*people;
   cost=transportation-ticket;
  }
 else if(category=="Normal" && people<=4)
 {
  transportation=budget-budget*75/100;
  ticket=249.99*people;
  cost=transportation-ticket;
 }
 else if(category=="VIP" && (people>=5 || people<=9))
 {
  transportation=budget-budget*60/100;
  ticket=499.99*people;
  cost=transportation-ticket;
 }
 else if(category=="Normal" && (people>=5 || people<=9))
 {
  transportation=budget-budget*60/100;
  ticket=249.99*people;
  cost=transportation-ticket;
 }
 else if(category=="VIP" && (people>=10 || people<=24))
 {
  transportation=budget-budget*50/100;
  ticket=499.99*people;
  cost=transportation-ticket;
 }
 else if(category=="Normal" && (people>=10 || people<=24))
 {
  transportation=budget-budget*50/100;
  ticket=249.99*people;
  cost=transportation-ticket;
 }
 else if(category=="VIP" && (people>=25 || people<=49))
 {
  transportation=budget-budget*40/100;
  ticket=499.99*people;
  cost=transportation-ticket;
 }
 else if(category=="Normal" && (people>=25 || people<=49))
 {
  transportation=budget-budget*40/100;
  ticket=249.99*people;
  cost=transportation-ticket;
 }
 else if(category=="VIP" && people>=50)
 {
  transportation=budget-budget*25/100;
  ticket=499.99*people;
  cost=transportation-ticket;
 }
  else if(category=="Normal" && people>=50)
 {
  transportation=budget-budget*25/100;
  ticket=249.99*people;
  cost=transportation-ticket;
 }
  return cost;
 }  
      
   
   
 
 