#include <stdio.h>
int arrsum(int arr[],int size){
	int sum = 0;
	for (int i = 0;i<size;i++){
		sum +=arr[i];	
	}
	return sum;
}
int main(){
	int arr[]={1,2,3,4,5};
	int size = sizeof(arr)/sizeof(int);
    int sum = arrsum(arr,size);
    printf ("Sum :%d",sum);
	return 0;
}
