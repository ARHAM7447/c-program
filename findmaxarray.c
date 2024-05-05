/*write the c program to find the maximum element in array*/
# include<stdio.h>

int returnmax(int array[],int n){
    int max = 0;
    for (int i=0; i<0; i++){
        if (array[i]>max){
            max = array[i];
        }
    
    }
    array[0] = 999;/*pointer*/
    return max;
}

int main(){
    int arr[]={1,12,3,5455,5,67,654};
    int max = returnmax(arr,7);
    printf (" the maximum element in this array is %d" , max);
    for (int i=0; i<7; i++)
    {
        printf("the element %d is %d\n",i,arr[i]);
    }
    return 0;
}
