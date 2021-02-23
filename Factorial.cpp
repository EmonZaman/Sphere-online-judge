#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int sum=0;
        while(n>=5)
        {
            n/=5;
            sum+=n;

        }
        cout<<sum<<endl;
    }
}

