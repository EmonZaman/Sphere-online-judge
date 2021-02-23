#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n!= -1)
    {
        int a[n+2];
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];

        }
        int check=sum/n;
        if(sum%n!=0)
            cout<<-1<<endl;
        else
        {
            int ans=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]>check)
                ans+=a[i]-check;

            }
            cout<<ans<<endl;
        }
    }

}

