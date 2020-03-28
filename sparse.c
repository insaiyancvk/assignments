#include<stdio.h>
#include<string.h>

int main()
{
    char str[100][100],que[100][100];
    int nstr,nque,res[100],x=0;

    scanf("%d",&nstr);
    for(int i=0;i<nstr;i++)
    {
        scanf("%s",str[i]);
    }

    scanf("%d",&nque);
    for(int i=0;i<nque;i++)
    {
        scanf("%s",que[i]);
    }

    for(int i=0;i<nque;i++)
    {
        x=0;
        for(int j=0;j<nstr;j++)
        {
            if(strcmp(que[i],str[j])==0)
            {
                x++;
            }
        }
        res[i]=x;
    }

    for(int i=0;i<nque;i++)
    {
        printf("%d\n",res[i]);
    }
    return 0;
}