#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(c==0)
            break;

        if((b-a) ==(c-b))
            cout<<"AP "<<c+(b-a)<<endl;

        else
        {
            cout<<"GP "<< c*(b/a)<<endl;
        }

    }

}

