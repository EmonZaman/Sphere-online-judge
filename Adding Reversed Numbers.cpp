#include<bits/stdc++.h>
using namespace std;
int rev(int num)
{
    int temp=0;
    while(num)
    {
        temp=(temp*10)+(num%10);
        num/=10;
    }
    return temp;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num1,num2;
        scanf("%d%d",&num1,&num2);
        printf("%d\n",rev(rev(num1)+rev(num2)));
    }
    return 0;
}


