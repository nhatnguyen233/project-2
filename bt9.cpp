#include <stdio.h>
#include <stdio.h>
int main()
{
    int a[99], i, n, tong=0;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
        tong= a[i]+tong;
    }
    printf("Mang vua nhap la: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    getch();
    printf("\nTong so da nhap la: %d", tong);
    int amax=a[0], amin=a[0];
    for (i = 1; i<n; i++)
    {
        if (a[i]>amax) amax=a[i];
        if (a[i]<amin) amin=a[i];
    }
    printf("\nPhan tu nho nhat la: %d", amin);
    printf("\nPhan tu lon nhat la: %d", amax);
  getch();
}


