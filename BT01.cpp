#include<stdio.h>
int main() {
	printf("                 MENU");
	printf("\n1. In giá tri các phan tu cua mang");
	printf("\n2. Su dung Insertion Sort sap xep mang giam dan và in ra");
	printf("\n3. Su dung Selection Sort sap xep mang tang dan và in ra");
	printf("\n4. Su dung Bubble Sort sap xep mang giam dan và in ra");
	printf("\n5. Thoat");
	int size;
	printf("\nnhap kich thuoc cua mang: ");
	scanf("%d", &size);
	int array[size];
	for (int i=0; i<size; i++){
		printf("\nphan tu thu [%d]: ",i);
		scanf("%d",&array[i]);
	}
	int number;
	printf("\nNhap dieu ban muon: ");
	scanf("%d", &number);
	switch(number)
	{
		case 1: 
			for (int i=0; i<size; i++){
				printf("Phan tu thu [%d] = %d\n",i,array[i]);
			}
			break;
		case 2:
			for (int i=0;i<size;i++){
				for(int j=i+1;j<size;j++){
					if(array[i] < array[j]){
						int temp = array[i];
						array[i] = array[j];
						array[j] = temp;
					}
				}
			}
			for (int i=0; i<size; i++){
				printf("phan tu thu [%d] = %d\n",i,array[i]);
			}
			break;
		case 3:
			for (int i=0;i<size;i++){
				for(int j=i+1;j<size;j++){
					if(array[i] > array[j]){
						int temp = array[j];
						array[j] = array[i];
						array[i] = temp;
					}
				}
			}
			for (int i=0; i<size; i++){
				printf("phan tu thu [%d] = %d\n",i,array[i]);
			}
			break;
		case 4: 
			for(int i=0; i<size; i++){
				for (int j=i+1; j<size; j++){
					if (array[i]<array[j]){
						int temp = array[i];
						array[i]=array[j];
						array[j]=temp;
					}
				}
			}
			for (int i=0; i<size; i++){
				printf("phan tu thu [%d] = %d\n",i,array[i]);
			}
			break;
		case 5:
			printf("thoat");
			break;	
			
	}
	
}
