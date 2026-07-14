// Leena Lukesh Metha
// 2503033111372049
#include <stdio.h>
int main()
{
    int i,o=0,e=0;
    int a[10],odd[10],even[10];
    for(i=0;i<10;i++){
        printf("Enter value of index %d : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]%2==0)
            even[e++]=a[i];
        else
            odd[o++]=a[i];
    }
    printf("\nEven Numbers:\n");
    for(i=0;i<e;i++)
        printf("%d ",even[i]);
    printf("\nOdd Numbers:\n");
    for(i=0;i<o;i++)
        printf("%d ",odd[i]);
    return 0;
}

    
