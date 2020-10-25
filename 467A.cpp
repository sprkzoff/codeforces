#include<cstdio>
 
using namespace std;
 
int main()
{
    int n,a,b,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(b-a >= 2)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}