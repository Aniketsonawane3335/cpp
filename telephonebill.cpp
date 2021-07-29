#include<iostream>
using namespace std;

class Telephone
{
public:
 char name[20],address[30];
 int telno,call,amount;
 
 void getdata()
 {
 cout<<"\n enter the name ";
 cin>>name;
 
 cout<<"\n enter the address ";
 cin>>address;
 
 cout<<"\n enter telephone no ";
 cin>>telno;
 
 cout<<"\n enter no of calls ";
 cin>>call;
 
 amount=call*2;
 }
 void showdata()
 {
 cout<<"\n amount is  "<<amount;
 
 }
 };
 int main()
 {
 Telephone s;
 s.getdata();
 s.showdata();
 }
 
