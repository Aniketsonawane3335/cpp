
#include<iostream>
using namespace std;
int main()
{
int o,p,sum=0,temp;
cout<<"enter any no =  ";
cin>>o;
temp=o;
while(o>0)

{
p=o%10;
sum=sum+(p*p*p);
o=o/10;
}
if(temp==sum)

cout<<"\n number is Armstromg";

else

cout<<"\n no is not Armstrong";
}





