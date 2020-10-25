#include<cstdio>
#include<cctype>
 
using namespace std;
 
int main()
{
    bool change=true;
    char x[101];
    scanf("%s",&x);
    for(int i=1;x[i]!=0;i++)
    {
        if(islower(x[i]))
        {
            change=false;
            break;
        }
    }
    if(change)
    {
        for(int i=0;x[i] != 0;i++)
        {
            if(isupper(x[i]))
                x[i]=tolower(x[i]);
            else
                x[i]=toupper(x[i]);
        }
    }
    printf("%s",x);
    return 0;
}