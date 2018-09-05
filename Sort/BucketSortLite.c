#include<stdio.h>
int main()
{
    int num[10]={0};
    printf("Please input 10 numbers:\n");

    //Input Array which element between 0 to 10
    for(int i=0;i<10;i++){
        scanf("%d",&num[i]);
    }

    //BucketSort
    int bucket[11]={0};
    for(int i=0;i<10;i++){
        bucket[num[i]]++;
    }

    //Print SortedArray
    printf("The sorted result is:\n");
    for(int i=0;i<11;i++){
        while(bucket[i]>0){
            printf("%d\n",i);
            bucket[i]--;
        }
    }
    return 0;
}
