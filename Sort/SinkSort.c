#include<stdio.h>
int main()
{
    int num[10]={0};
    printf("Please input 10 numbers:\n");

    //Input Array
    for(int i=0;i<10;i++){
        scanf("%d",&num[i]);
    }

    //SinkSort
    int temp=0;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(num[i]>num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }

    //Print SortedArray
    printf("The sorted result is:\n");
    for(int i=0;i<10;i++){
        printf("%d\n",num[i]);
    }
    return 0;
}
