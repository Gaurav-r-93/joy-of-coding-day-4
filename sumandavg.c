#include<stdio.h>
void main () 
{
  
    int a[10];
    float b[10],sum1,sum2,avg1,avg2;
  
    printf ("\nMr. Int Details :\n");
    for (int i = 0; i < 6; i++)
    scanf ("%d", &a[i]);

    printf ("\nMr. float Details :\n");
    for (int i = 0; i < 6; i++)
    scanf ("%f", &b[i]);
    for(int i=0;i<6;i++)
    {
    sum1=sum1+a[i];
    sum2=sum2+b[i];
    }
    avg1=sum1/6.0;
    avg2=sum2/6.0;
    printf("\nthe sum of int is=%f the avereage is=%f",sum1,avg1);
    printf("\nthe sum of float is=%f the average is=%f",sum2,avg2);
}
  

