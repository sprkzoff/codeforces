#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    bool change=true;
    int a,b,stone,temp;
    scanf("%d %d %d",&a,&b,&stone);
    while(1)
    {
        //printf("change=%d stone=%d a=%d b=%d\n",change,stone,a,b);
        if(change==true)
        {
            if(stone<=0)
            {
                printf("1");
                break;
            }
            temp=__gcd(a,stone);
            change=false;
        }
        else
        {
            if(stone<=0)
            {
                printf("0");
                break;
            }
            temp=__gcd(b,stone);
            change=true;
        }
        stone-=temp;
    }
    return 0;
}
