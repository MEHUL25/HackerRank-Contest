#include <bits/stdc++.h>

using namespace std;

#define NN  1000001

int modpow(int a, int b, int M)
{
    if (!b)
        return 1;
    int t = modpow(a,b/2,M);
    t = (t*(long)t) % M;
    if (b&1)
        t = (t*(long)a) % M;
    return t;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A,B,X;
        cin >> A >> B >> X;
        if (X==1) return 0;
        int ph = euler(X);
        B %= ph; if (B<0) B+=ph;
        cout<<modpow(A,B,X);
    }
    return 0;
}
