#include<cstdio>

using namespace std;

int main()
{
    long long a,b,n;
    scanf("%I64d %I64d %I64d",&a,&b,&n);
    long long count1,count2;
    if(a%n==0)
    {
        count1=a/n;
    }
    else
    {
        count1=(a/n)+1;
    }
    if(b%n==0)
    {
        count2=b/n;
    }
    else
    {
        count2=(b/n)+1;
    }
    printf("%I64d",count1*count2);
    return 0;
}
