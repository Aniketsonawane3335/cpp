#include<iostream>
using namespace std;

class Time
{
int hr,min,sec;

public:
void getdata()
{
cout<<"\nenter the hr";
cout<<"\nenter the min";
cout<<"\nenter the sec";

cin>>hr;
cin>>min;
cin>>sec;
}
void showdata()
{
cout<<"\n time in hr is= "<<hr;
cout<<"\n time in min is= "<<min;
cout<<"\n time in sec is= "<<sec;
}
};

int main()
{
Time s;
s.getdata();
s.showdata();

return 0;
}


