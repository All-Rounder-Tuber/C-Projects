#include <stdio.h>
void bubbleSort(int array[],int size) {
    for(int step = 0; step < size - 1; step++) {
        for(int i = 0; i < size - step - 1; i++) {
            if(array[i] > array[i+1]) {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
}
void printArr(int array[],int size) {
    for(int i = 0; i < size; i++) {
        printf("%d \t",array[i]);
    }
}
// void inputArr(int array[],int size) {
//     for(int i = 0; i < size-1; i++) {
//         printf("Enter %d number: ", i);
//         scanf("%d",&array[i-1]);
//     }
// }
int main() {
    int size;
    printf("Enter how many numbers you want to sort : ");
    scanf("%d",&size);
    int data[size];
    printf("\n");
    for(int i = 0; i < size; i++) {
        printf("Enter %d number: ", i+1);
        scanf("%d",&data[i]);
    }

    // inputArr(data, usersize);
    bubbleSort(data,size);
    printf("Your numbers in acsending order are: ")
    printArr(data, size);

    return 0;
}
