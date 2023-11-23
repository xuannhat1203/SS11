#include<stdio.h>
int main(){
	int size;
	printf("Nhap so phan tu minh muon: ");
	scanf("%d", &size);
	int array[size];
	int max = array[0];
	for(int i=0; i<size; i++){
		printf("phan tu thu [%d] la: ",i);
		scanf("%d", &array[i]);
	}
	for(int i=0; i<size; i++){
		for (int j=i+1;j<size; j++){
			if (array[i] > array[i+1]){
			int temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
			}
		}	
	}
	for(int i=0; i<size; i++){
		printf("phan tu thu [%d]: %d\n",i,array[i]);
	}
}

