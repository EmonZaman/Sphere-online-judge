#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x!=y&&x-y!=2)
        {
            cout<<"No Number"<<endl;
            continue;
        }
        if(x%2==0 && y%2==0)
        {
            cout<<x+y<<endl;
        }
        else
            cout<<x+y-1<<endl;
    }
}

