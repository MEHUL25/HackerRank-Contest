#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long int
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll t;
    cin>>t;
    while(t--)
    {
        ll h,c,s=0,b,ch,pa,max,min,p1,p2,j;
        cin>>b>>pa>>ch;
        cin>>h>>c;
        if(b/2<(pa+ch))
        {
            if(h>=c)
            {
                max=h;min=c;p1=pa;p2=ch;
            }
            else
            {
                max=c;min=h;p1=ch;p2=pa;
            }
            if(b/2-p1<=0)
            {
                j=b/2;b=0;
            }
            else
            {
                j=p1;
                b=b-p1*2;
                //cout<<b<<"\t";
            }
            s=j*max;
            //cout<<s<<"\n";
            if(b/2-p2<0)
            {
                j=b/2;
            }
            else
            {
                j=p2;
            }
            s=s+j*min;
            cout<<s<<"\n";
        }
        else
        {
            cout<<pa*h+ch*c<<"\n";
        }
    }
    return 0;
}
