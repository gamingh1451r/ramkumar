#include <stdio.h>
int main()
{
    int array[5];
    int mul=1;
    printf("Enter array\n");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    for (int j=0;j<5;j++)
    {
        mul+=array[j];
    }
    printf("avg of elements=%d\n",(mul/5));
    printf("the 3rd elment of array %d",array[2]);
    return 0;
}
