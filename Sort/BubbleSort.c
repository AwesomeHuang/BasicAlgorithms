#include<stdio.h>
int main()
{
    int num[10]={0};
    printf("Please input 10 numbers:\n");

    //Input Array
    for(int i=0;i<10;i++){
        scanf("%d",&num[i]);
    }

    //BubbleSort
    int temp=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(num[j]>num[j+1]){
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
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
