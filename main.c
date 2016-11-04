#include<stdio.h>
#include<math.h>
int main()
{

    int n,i,j,it,itmax,k;
    float a[50][50],t[50],x[50],eps,s=0,y[50],max;
    printf("n=");
    scanf("%d",&n);
    printf("eps=");
    scanf("%f",&eps);
    printf("itmax=");
    scanf("%d",&itmax);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=n;j++)
        {
            printf("%f ",a[i][j]);
        }

    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("t[%d]=",i);
        scanf("%f",&t[i]);
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
    }
    for(i=1;i<=n;i++)
        printf("%f ",x[i]);
    printf("\n");
    it=0;
    for(k=1;k<=4;k++)
    {
        max=0;
        for(i=1;i<=n;i++)
        {
            s=0;
            for(j=1;j<=n;j++)
                if(j!=i)
                    s=s+a[i][j]*x[j];
            y[i]=(t[i]-s)/a[i][i];
            if(max<fabs(y[i]-x[i]))
                max=fabs(y[i]-x[i]);
        }
        for(i=1;i<=n;i++)
            x[i]=y[i];
        it=it+1;
        printf("solutia %d:\n",k);
        for(i=1;i<=n;i++)
        {
            printf("x[%d]=%f ",i,x[i]);
            printf("\n");
        }
    }
    return 0;
}
