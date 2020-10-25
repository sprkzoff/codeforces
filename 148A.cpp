#include<cstdio>
 
using namespace std;
 
int main()
{
    int n,atk[4],i,j;
    scanf("%d %d %d %d %d",&atk[0],&atk[1],&atk[2],&atk[3],&n);
    int check[n];
    for(i=0;i<n;i++)
    {
        check[i]=0;
    }
    for(i=0;i<4;i++)
    {
        for(j=atk[i]-1;j<n;j+=atk[i])
        {
            check[j]=1;
        }
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(check[i]==1)
            sum++;
    }
    printf("%d",sum);
    return 0;
}