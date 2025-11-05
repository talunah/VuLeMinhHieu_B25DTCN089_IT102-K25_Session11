#include <stdio.h>
int main(){
	int i,j,tmp;
	int arr[]={6,64,23,5,26,36};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Gia tri cua ca phan tu trong mang:\n");
	for(i=0;i<size;i++){
		printf("a[%d]: %d\n",i,arr[i]);
	}
	for(i=0;i<size-1;i++){
		for(j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
	printf("Mang sau khi sap xep la: ");
	for(i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
}
