#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void permute(string str,ll b, string out,ll& m)
{

    if (str.size() == 0)
    {
        ll r=0;
        for(ll i=out.length()-1;i>=0;i--)
        {
            r=r+(out[i]-48)*pow(10,i);
        }
        if(r<b&&r>m)
        {
            m=r;
        }
        return;
    }

    for (int i = 0; i < str.size(); i++)
    {
        permute(str.substr(1),b, out + str[0],m);
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string a;
    ll b;
    cin>>a;
    cin>>b;
    ll l=a.length();
    ll m=0;
    permute(a,b,"",m);
    cout<<m;
    return 0;
}
