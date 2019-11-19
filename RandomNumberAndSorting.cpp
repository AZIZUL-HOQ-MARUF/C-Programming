#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <windows.h>
using namespace std;
void insertionSort(int arr[],int length){
    int i,j,x;
    for(int i=1;i<length;i++){
        j = i-1;
        x=arr[i];
        while(j>-1 && arr[j]>x){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}
void bubbleSort(int arr[],int length){
    for(int i = length-1;i>0;i--){
            for(int j=0;j<i;j++){
                if(arr[j]>arr[j+1]){
                    arr[j] = arr[j]+arr[j+1];
                    arr[j+1] = arr[j] - arr[j+1];
                    arr[j] = arr[j]-arr[j+1];
                }
            }
    }
}
int main(){
    int num[10000];
    int length = sizeof(num)/sizeof(int);
    srand(time(0));
    for(int i=0;i<length;i++){
        num[i] = rand() % 1000 + 1 ;
    }
    DWORD start_time = GetTickCount();
    insertionSort(num,length);
    DWORD end_time = GetTickCount();
    cout<<"execution time of insertion sort "<<end_time-start_time<<" ms.\n";

     for(int i=0;i<length;i++){
        num[i] = rand() % 1000 + 1 ;
     }
     start_time = GetTickCount();
     bubbleSort(num,length);
     end_time = GetTickCount();
     cout<<"execution time of bubble sort "<<end_time-start_time<<" ms.\n";
return 0;
}
