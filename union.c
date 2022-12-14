#include<stdio.h>
#include<stdlib.h>


//union of the two array
void printUnion(int arr1[], int arr2[], int m, int n){

    int i=0, j=0;
    while(i<m && j<n){
        
        if(arr1[i] < arr2[j]){
        printf(" %d", arr1[i]);
        i++;
        }
        else if(arr2[j] < arr1[i]){
            printf(" %d", arr2[j]);
            j++;
        }
        else{
            printf(" %d", arr2[j]);
            j++;
            i++;
        }

    }

    while(i < m){
    printf(" %d", arr1[i]);
    i++;
    }
    while(j<n){
    printf(" %d", arr2[j]);
    j++;
    }
}

void main(){
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2) /sizeof(arr2[0]);

    printUnion(arr1, arr2, m, n);
}