#include <iostream> 
int main() { 
int f1, f2, fib, i, n; 
f1=1;
f2=1; 
cin>>n; 
cout<<"\nfib1: 1"<<"\nfib2: 1"; 
for (i=3;i<=n;i++) 
{
    fib=f1+f2;
    f1=f2;
    f2=fib;
    cout<<"fib"<<i<<": "<<fib<<"\n";
}
return 0;
} 
