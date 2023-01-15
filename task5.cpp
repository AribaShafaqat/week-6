#include<iostream>
using namespace std;
int totincome(string screening, int rows, int columns);
main()
{
 string screening;
 int rows,columns;
 cout<<"enter type of screening"<<endl;
 cin>>screening;
 cout<<"enter rows and columns"<<endl;
 cin>>rows>>columns;
 float totalIncome;
 totalIncome=totincome(screening,rows,columns);
 cout<<"total income is : "<<totalIncome<<endl;
}
int totincome(string screening, int rows, int columns)
{
 int income;
 int area;
 area=rows*columns;
 if(screening=="primiere")
 {
  income=area*12.00;
 }
 if(screening=="normal")
 {
  income=area*7.50;
 }
 if(screening=="discount")
 {
 income=area*5.00;
 }
return income;
}
