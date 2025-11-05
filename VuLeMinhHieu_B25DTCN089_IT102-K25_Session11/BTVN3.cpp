#include<stdio.h>
int main(){
	int i, j, tmp,srchVal;
	int left,right,mid;
	int a[]={1,2,3,4,5};
	int size=sizeof(a)/sizeof(a[0]);
	printf("Gia tri cua ca phan tu trong mang:\n");
	for(i=0;i<size;i++){
		printf("a[%d]: %d\n",i,a[i]);
	}
	printf("Nhap vao gia tri can tim: ");
	scanf("%d",&srchVal);
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(a[i]>a[j]){
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	left=0,right=size-1;
	do{
		mid=left+(right-left)/2;
		if(a[mid]>srchVal){
			right=mid-1;
		}
		if(a[mid]<srchVal){
			left=mid+1;
		}
	}while(a[mid]!=srchVal && left!=right);
	if(a[mid]==srchVal){
		printf("Phan tu a[%d] co gia tri bang %d\n",mid,srchVal);
	}else{
		printf("Khong tim thay phan tu nao co gia tri bang %d\n",srchVal);
	}
}
