#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a;
 while(scanf("%d",&a))
 {
  if(a==0)
   break;
  int sum;
  sum=(a*(a+1)*(2*a+1))/6;
  printf("%d\n",sum);
 }
 return 0;
}

