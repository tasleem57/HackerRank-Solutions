#include<iostream>
using namespace std;
void sum(int a,int b,int c,int d)
{
    int max;
    if(a>b&&a>c&&a>d)
    {
        max=a;
    }
    else if(b>a&&b>c&&b>d)
    {
        max=b;
    }
    else if(c>a&&c>b&&c>d)
    {
        max=c;
    }
    else
    {
        max=d;
    }
    cout<<max;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    sum(a,b,c,d);
    return 0;
}
