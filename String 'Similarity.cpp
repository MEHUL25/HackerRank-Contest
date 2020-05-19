#include <bits/stdc++.h>

using namespace std;

// Complete the stringSimilarity function below.
#define ll long long int

int main()
{


    int t;
    cin >> t;
    while(t--)
    {
        string a,b;
        cin>>a;
        ll l1;
        l1=a.length();
        ll c=0,max=l1,k,p;
        for(ll i=1;i<l1;i++)
        {
            //for(ll j=i;j<l1;j++)
            {

                c=0;k=0;p=i;
                    while(k<l1&&p<l1&&a[k]==a[p])
                    {
                        k++;p++;c++;
                    }
                max=max+c;
            }


        }
        cout<<max<<"\n";
    }

    return 0;
}
