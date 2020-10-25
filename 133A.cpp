#include<cstdio>
 
using namespace std;
 
 
int main()
{
    char p[101];
 
    scanf("%s",&p);
    int i;
    for(i=0;p[i]!=0;i++)
    {
        if(p[i]=='H' || p[i]=='9' || p[i]=='Q')
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}