#include <stdio.h>
int main(){
	int i,searchValue;
	int isExist=0;
	int arr[]={6,64,23,5,26,36};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Gia tri cua ca phan tu trong mang:\n");
	for(i=0;i<size;i++){
		printf("a[%d]: %d\n",i,arr[i]);
	}
	printf("Nhap vao gia tri can tim:");
	scanf("%d",&searchValue);
	for(i=0;i<size;i++){
		if(arr[i] == searchValue){
			isExist = 1;
			printf("Phan tu co chi so %d co gia tri bang %d\n",i,searchValue);
			break;
		}
	}
	if(!isExist){
		printf("Khong tim thay phan tu nao co gia tri la %d\n",searchValue);
	}
}
