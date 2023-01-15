#include<iostream>
using namespace std;
string checktitle(char gender, int age);
main()
{
 int age;
 char gender;
 cout<<"Enter age"<<endl;
 cin>>age;
 cout<<"enter gender"<<endl;
 cin>>gender;
 string res;
 res=checktitle(gender,age);
 cout<<"Your title is: "<<res;
}
string checktitle(char gender, int age)
{
 string title;
 if(gender=='m' && age>=16)
  {
   title="Mr.";
  }
 else if(gender=='m' && age<16)
  {
  title="Master";
  }
 else if(gender=='f' && age>=16)
 {
  title="Ms.";
 }
 else if(gender=='f' && age<16)
 {
  title="Miss";
 }

return title;
}
   
