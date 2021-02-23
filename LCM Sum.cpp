#include<bits/stdc++.h>

#define ll long long
#define p phi
using namespace std;

int n=1000000;
ll p[1000002],sum[1000002];

void Euler()
{
    for(int i=1; i<=n; i++)
        p[i]=i;

    for(int i=2; i<=n; i++)
    {
        if(p[i]==i)
        {
            for(int j=i;j<=n;j=j+i)
            {
                p[j]=p[j]-p[j]/i;
            }
        }
    }

}
void divisors()
{
   // cout<<p[1]<<" "<<p[5]<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j=j+i)
        {
            sum[j]=sum[j]+(i*p[i]);
        }
    }
   // cout<<sum[5]<<endl;
}




int main()
{
     Euler();
     divisors();

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        cout<<((sum[n]+1)*n)/2<<endl;


    }


}

