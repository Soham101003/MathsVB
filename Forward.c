#include<stdio.h>
int main()
{
    int i,j,data_points;
    float fact,x,y,u,u1;
    printf("Enter the number of data points : \n");
    scanf("%d", &data_points);
    float a[data_points][data_points+1];
    printf("Enter the values of x : \n");
    for(i=0;i<data_points;i++)
    {   
        scanf("%f",&a[i][0]);

    }
    printf("Enter the values of y : \n");
    for(i=0;i<data_points;i++)
    {
            scanf("%f", &a[i][1]);
    }
    for(j=2;j<data_points;j++)
    {
        for(i=0;i<data_points;i++)
        {
            a[i][j]=a[i+1][j-1]-a[i][j-1];
        }
    }
    printf("\nThe forward Difference table is : \n");
    for(i=0;i<data_points;i++)
    {
            for(j=0;j<data_points-i;j++)
            {
                printf("%.2f", &a[i][j]);
            }
            printf("\n");
    }
    // finding u
    printf("Enter the value at which interpolation of x is required : \n");
    scanf("%f",&x);
    u=x-a[0][0]/a[1][0]-a[0][0];
    u=u1;
    y=a[0][1];
    fact=1;
    for(i=0;i<data_points;i++)
    {
        y+=u1*a[0][i]/fact;
        fact=fact*i;
        u1=u1*u-(i-1);
    }
    printf("Interporlation of %f is %f", x,y);
    return 0;
}