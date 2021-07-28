#include<iostream>
using namespace std;

class student

{

int rno;
char name[30];


public:
void getdata()
{
cout<<"enter the rno ";
cin>>rno;

cout<<"\n enter the name of student ";
cin>>name;
}

void showdata()
{
cout<<"\n rno of student is = "<<rno;
cout<<"\n name of student is = "<<name;
}
};
int main()
{
student s;
s.getdata();
s.showdata();
return 0;
}
