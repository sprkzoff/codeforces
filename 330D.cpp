#include<cstdio>
#include<queue>
#include<vector>

using namespace std;

vector<int> enemyi,enemyj;

queue<int> x,y;

int n,m,finish_i,finish_j,start_i,start_j,maindis;

int check[1000+1][1000+1];

char land[1000+1][1000+1];

void init_check()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(check[i][j] != -1)
            {
                check[i][j]=0;
            }
        }
    }
}

int BFS()
{
    int ret,ret2;
    //printf("***\n");
    while(!x.empty())
    {
        int i=x.front(),j=y.front();
        x.pop();
        y.pop();
        if(i+1 < n && check[i+1][j] == 0)
        {
            check[i+1][j]=check[i][j]+1;
            x.push(i+1);
            y.push(j);
        }
        if(i-1 >= 0 && check[i-1][j] ==0)
        {
            check[i-1][j]=check[i][j]+1;
            x.push(i-1);
            y.push(j);
        }
        if(j+1 < m && check[i][j+1] == 0)
        {
            check[i][j+1]=check[i][j]+1;
            x.push(i);
            y.push(j+1);
        }
        if(j-1 >= 0 && check[i][j-1] == 0)
        {
            check[i][j-1]=check[i][j]+1;
            x.push(i);
            y.push(j-1);
        }
    }
    ret=check[start_i][start_j];
    //init_check();
    return ret;
}

int main()
{
    scanf("%d %d",&n,&m);
    int i,j;
    for(i=0;i<n;i++) //setup
    {
        scanf("%s",&land[i]);
        for(j=0;j<m;j++)
        {
            if(land[i][j]=='T')
            {
                check[i][j]=-1;
            }
            else if(land[i][j]=='E')
            {
                finish_i = i;
                finish_j = j;
            }
            else if(land[i][j]=='S')
            {
                start_i = i;
                start_j = j;
            }
            else  if(land[i][j]  > '0' && land[i][j] <= '9')
            {
                enemyi.push_back(i);
                enemyj.push_back(j);
            }
        }
    }
    /*
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%3d",check[i][j]);
        }
        printf("\n");
    }
    */
    check[finish_i][finish_j]=1;
    x.push(finish_i);
    y.push(finish_j);
    maindis=BFS();
    //printf("%maindis = %d\n",maindis);
    int sum=0;
    for(i=0;i<enemyi.size();i++) //check enemy path
    {
        if(check[enemyi[i]][enemyj[i]] <= maindis && check[enemyi[i]][enemyj[i]] != 0)
            sum+=land[enemyi[i]][enemyj[i]]-'0';
    }
    printf("%d",sum);
    return 0;
}
