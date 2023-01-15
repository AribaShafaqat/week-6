#include<iostream>
using namespace std;
char calculategrade(int marks);
main()
{
  int marks;
  cout<<"Enter your marks"<<endl;
  cin>>marks;
  char grade;
  char res=calculategrade(marks);
  cout<<"Your grade is : "<<res<<endl;
}

char calculategrade(int marks)
{
 char grade;
 if(marks<50)
 {
  grade='F';
 }
 else if(marks>=50 && marks<=60)
 {
 grade='E';
 }
 else if(marks>=60 && marks<=70)
 {
 grade='D';
 }
 else if(marks>=70 && marks<=80)
 {
 grade='C';
 }
 else if(marks>=80 && marks<85)
 {
 grade='B';
 }
 else if(marks>85)
 {
  grade='A';
 }
return grade;
}