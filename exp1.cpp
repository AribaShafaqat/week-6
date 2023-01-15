#include<iostream>
using namespace std;
int greatnum(int a,int b,int c);
main()
{
 int aa,bb,cc;
 cout<<"enter three numbers"<<endl;
 cin>>aa>>bb>>cc;
 int mx=greatnum(aa,bb,cc);
 if(mx==0)
 {
  cout<<"invalid input"<<endl;
 }
else
 {
 cout<<"larger number is" <<mx<<endl;
 }
}
int greatnum(int a,int b,int c)
{
 int largenum;
 if(a>b && a>c)
 {
  largenum=a;
 }
 else if(b>a && b>c)
 {
  largenum=b;
 }
else if(c>a && c>b)
 {
 largenum=c;
 }
else
 {
 largenum=0;
 }
return largenum;
}