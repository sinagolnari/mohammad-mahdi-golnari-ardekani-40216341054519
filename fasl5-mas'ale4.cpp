#include <iostream> 
#include <conio> 
#include <math> 
void root(int,int,int); 
int main() 
{ 
clrscr(); 
int a,b,c; 
cin>>a>>b>>c; 
root(a,b,c); 
} 
//jaiigozari dar formul baraye mohasebe rishe az delta 
void root(int a,int b,int c) 
{ 
float delta; 
clrscr(); 
delta=b*b-4*a*c; 
if(delta>0) 
{ 
cout<<"x1="<<(-b-sqrt(delta))/(2*a)<<endl; 
cout<<"x2="<<(-b+sqrt(delta))/(2*a)<<; 
} 
else if(delta==0) 
cout<<"x="<<-b/(2*a); 
else 
cout<<"no Root"; 
return 0;
} 