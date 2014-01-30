#include<cstdio>
#include<cstdlib>
int main()
{
    bool ch[3001];
    int n, a, diff, past, flag, t, i;
    scanf("%d",&t);
    while(t--)
    {
   		scanf("%d",&n);
    
        for(i=1; i<n; i++) ch[i] = false;
        flag = true;
        past = 0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &a);
            ch[abs(past - a)] = true;
            past = a;
        }
        for(i=1; i<n; i++)
        {
            if(!ch[i])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }

    return 0;
}
