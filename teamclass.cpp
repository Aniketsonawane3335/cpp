#include<iostream>
using namespace std;

class Country
{
char name[20];
public:
void getdata()
{
cout<<"\nenter the country name ";
cin>>name;
 
 }
 void showdata()
{

cout<<"\n country name is ="<<name;
}
 };
 
 class Player
 {
 char name[30];
public:
void getdata()
{
cout<<"\nenter the player name ";
cin>>name;
}

void showdata()
{

cout<<"\n player name is ="<<name;
}

};
class Macthe
{
int no;
public:
void getdata()
{
cout<<"\nenter the matches ";
cin>>no;
 
 }
 void showdata()
{

cout<<"\n matches plays are ="<<no;
}
 };
class Age
{
int age;
public:
void getdata()
{
cout<<"\nenter the age of player ";
cin>>age;
 
 }
 void showdata()
{

cout<<"\n player age is ="<<age;
}
 };
class Bat
{
float avg;
public:
void getdata()
{
cout<<"\nenter the batting avg of player ";
cin>>avg;
 
 }
 void showdata()
{

cout<<"\n batting avg of player is ="<<avg;
}
 };

int main()
{
Country s;
s.getdata();
Player p;
p.getdata();
Macthe m;
m.getdata();
Age a;
a.getdata();
Bat b;
b.getdata();
s.showdata();
p.showdata();
m.showdata();
a.showdata();
b.showdata();
return 0;
}

