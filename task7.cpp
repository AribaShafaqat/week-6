#include<iostream>
using namespace std;
bool greaterNumber(int n1,int n2,int n3);
main()
{
 int num1,num2,num3;
 cout<<"Enter three numbers"<<endl;
 cin>>num1>>num2>>num3;
 int greaternumber;
 greaternumber=greaterNumber(num1,num2,num3);
 if(greaternumber==1)
 {
  cout<<"yes"<<endl;
 }
 else
{
 cout<<"no"<<endl;
 }


}
bool greaterNumber(int n1,int n2,int n3)
{
 if(n1==n2 && n2==n3)
 {
 return 1;
 }
 else
 {
  return 0;
 }
}