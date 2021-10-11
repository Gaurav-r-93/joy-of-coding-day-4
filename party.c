#include<stdio.h>
void main () 
{
  
    int a[10],i;
    float b[10],max1,max2;
  
    printf ("\nMr. Int Details :\n");
    for (i = 0; i < 6; i++)
    scanf ("%d", &a[i]);

    printf ("\nMr. float Details :\n");
    for (i = 0; i < 6; i++)
    scanf ("%f", &b[i]);
    for(i=0;i<6;i++)
    max1=a[0];
    max2=b[0];
    if (a[i+1]>a[i])
    {
    max1=a[i+1];
    }
    if (b[i+1]>b[i])
    {
    max2=b[i+1];
}
printf("\nmr int can party on the day which he gets the pay=%f",max1);
printf("\nmr float can party on the day which he gets the pay=%f",max2);
}
  
