#include<stdio.h>
void main () 
{
  
    int a[10];
    float b[10];
  
    printf ("\nMr. Int Details :\n");
    for (int i = 0; i < 6; i++)
    scanf ("%d", &a[i]);

    printf ("\nMr. float Details :\n");
    for (int i = 0; i < 6; i++)
    scanf ("%f", &b[i]);

  
    printf ("\nMr. Int in Details :\n");
    for (int i = 0; i < 6; i++)
    printf ("%d ", a[i]);
  
    printf ("\nMr. floatt Details:\n");
    for (int i = 0; i < 6; i++)
    printf ("%f ", b[i]);
  
  
    printf ("\nMr. Int Details reverse:\n");
    for (int i = 5; i >= 0; i--)
    printf ("%d ", a[i]);
  
    printf ("\nMr. float Details:reverse\n");
    for (int i = 5; i >= 0; i--)
    printf ("%f ", b[i]);

}
