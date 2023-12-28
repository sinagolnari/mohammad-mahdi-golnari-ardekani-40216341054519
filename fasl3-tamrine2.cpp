#include <iostream>
int main() {
    int m, n, p, f, t;
    cin>>m>>n;
    f=m;
    p=n;
    do{
        t=m%n;
        m=n;
        n=t;
    } while(t!=0);
    cout<<m<<endl;
    cout<<(p*f)/m;
    return 0;
}
