#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5], i, n,j, temp;                                                                
    printf("Nhap vao so phan tu cua mang: ");       
    scanf("%d", &n);
    for (i = 0; i < n; i++)                         
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Mang vua nhap la: ");                   
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    getch();        
     for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nMang sap xep giam dan: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    getch();
}
