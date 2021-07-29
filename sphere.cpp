#include<iostream>
//#include<math.h>
using namespace std;

class Sphere
{
public:
float surface,volume,radius;
void getdata()
{
cout<<"\n enter the radius of sphere ";
 cin>>radius;
 
 surface=4*3.14*radius*radius;
 
cout<<"\n enter the surface area of sphere ";
 cin>>surface;
 
 volume=1.33*3.14*radius*radius*radius;
 

 }
 void showdata()
 {
 
 
 cout<<"\n the volume of sphere is: "<<volume;
 }
 };
 int main()
 {
 Sphere s;
 s.getdata();
 s.showdata();
} 

