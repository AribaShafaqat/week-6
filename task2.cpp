#include<iostream>
using namespace std;
int discount(string day,string month, float amount);
main()
{
 string day,month;
 float amount;
 cout<<"enter day and month"<<endl;
 cin>>day>>month;
 cout<<"enter amount"<<endl;
 cin>>amount;
 int totpay=discount(day,month,amount);
 cout<<"Payable amount is : "<<totpay<<endl;
}
int discount(string day,string month, float amount)
{
 int payable;
 if(day=="Sunday" && month=="October"||month=="August"||month=="March")
  {
   payable=amount-(amount*10/100);
  }
else if(day=="Monday"&& month=="November"|| month=="December")
 {
  payable=amount-(amount*5/100);
 }
return payable;
}
