#include <iostream>
int main()
{
int i, j, sum, n;
cout<<"Enter n:";
cin>>n;
for(i=0;i<=23455;i++)
{
j=i;
sum=0;
while(j > 0)
{
    sum=sum+j%10;
    j=j/10; 
    }
    if (sum==n)
    {
        cout<<i;
        break; 
    }
}
return 0;
}
