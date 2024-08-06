#include <stdio.h>
int sum_of_lists(int numbers[], int size){
    int sum=0;
    for(int i = 0;i<size;i++){
        sum+=numbers[i];
    }
    return sum;
}
int main(){
    int numbers[]={1,2,3,4,5,6,7,8};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    int result=sum_of_lists(numbers,size);
    printf("The sum of all numbers in the list is: %d\n",result);
}