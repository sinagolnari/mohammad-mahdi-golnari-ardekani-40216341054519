#include <iostream>
int main() {
    int a=1, b=2, c=3;
    cin>>a>>b>>c;
    int maxnum;
    if(a > b)
    {maxnum=a;
    else if (b > c)
    maxnum=b;
    else maxnum=c;
    cout << maxnum;
    }
return 0;
}