#include<bits/stdc++.h>
using namespace std;

int divisors(int a)
{
    int ans;

    int c=0;
    for(int i=1; i*i<=a; i++)
    {
        if(i*i==a)
            c++;
        else if(a%i==0)
            c=c+2;

    }
    return c;
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main()
{
    int n,n1,c,t,ans,final_answer;
    scanf("%d",&t);

    while(t--)

    {
        scanf("%d %d", &n, &n1);
        ans=gcd(n,n1);

        final_answer=divisors(ans);
        printf("%d\n",final_answer);




    }

    return 0;

}


