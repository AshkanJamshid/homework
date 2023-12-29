#include<iostream>
using namespace std;
int main()
{
char n;
cin>>n;
 switch(n)
{
case 'a' : cout<<20; break;
case 'b' : cout<<19; break;
case 'c' : cout<<18; break;
case 'd' : cout<<16; break;
case 'e' : cout<<"under 16"; break;
default : cout<<"Invalid input";
}
}
