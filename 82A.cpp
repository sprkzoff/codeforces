#include<cstdio>

using namespace std;

int main()
{
    int x[5]={1,1,1,1,1};
    int n,i,c=0;
    scanf("%d",&n);
    i=0;
    while(c< n)
    {
        //printf("%d %d\n",c,n);
        i=i%5;
        c=c+x[i];
        x[i]=x[i]*2;
        i++;
    }
    if(i==1)
    {
        printf("Sheldon");
    }
    else if(i==2)
    {
        printf("Leonard");
    }
    else if(i==3)
    {
        printf("Penny");
    }
    else if(i==4)
    {
        printf("Rajesh");
    }
    else
    {
        printf("Howard");
    }
    return 0;
}
