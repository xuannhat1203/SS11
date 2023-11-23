#include<stdio.h>
int main() {
	int size;
	printf("nhap kich thuoc cua mang: ");
	scanf("%d",&size);
	printf("                   MENU");
	printf("\n1. In giá tri các phan tu cua mang");
	printf("\n2. Nhap giá tri tìm kiem và su dung thuat toán tìm kiem tuyen tính tìm tat ca các phan tu trong mang có giá tri bang giá tri tìm kiem");
	printf("\n3. Nhap giá tri tìm kiem và su dung thuat toán tìm kiem nhi phân tìm phan tu trong mang");
	printf("\n4. Thoat");
	int array[size];
	for(int i=0; i<size; i++){
		printf("\nphan tu thu [%d]: ",i);
		scanf("%d", &array[i]);
	}
	int number;
	int find;
	int count=0;
	int mid;
	int start = 0;
	int end = size;
	printf("\nnhap dieu ban muon: ");
	scanf("%d", &number);
	switch(number)
	{
		case 1:
			for(int i=0; i<size; i++){
				printf("Phan tu thu [%d] = %d\n",i,array[i]);
			}
			break;
		case 2:
			printf("nhap phan tu muon tim kiem: ");
			scanf("%d", &find);
			for(int i=0; i<size; i++){
				if(find==array[i]){
					count++;
				}
			}
			printf("Co %d ki tu giong ki tu tim kiem",count);
			break;
		case 3: 
			printf("nhap phan tu muon tim kiem: ");
			scanf("%d", &find);
			while(start<=end) {
    		mid = (start+end)/2;
    		if (array[mid] == find){
     		break;
    		}else if (array [mid]<find) {
    	 		start = mid+1;
   	 		}else {
      			end = mid-1;
    		}
  			}
  			if (array [mid] == find) {
	 			printf("Phan tu co chi so %d trong mang co gia tri %d\n",mid,array[mid]);
			}else {
    			printf("Khong tim thay phan tu co gia tri %d trong mang\n",find);
 			}
 			break;
 		case 4: 
 		 	printf("Thoat");
 		 	break;
	}
}
