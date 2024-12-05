#include <stdio.h>
int main(){
	int n, a, check = 1, index, count;
    int choice;
	int arr[100];
	
	do{
		printf("---MENU---\n");
		printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu cua mang \n");
		printf("3. Ðem so luong cac so hoan hao co trong mang\n");
		printf("4. Tim gia tri nho thu 2 trong mang\n");
		printf("5. Them 1 phan tu ngau nhien vao mang\n");
		printf("6. Xoa 1 phan tu trong mang\n");
		printf("7. Sap xep mang theo thu tu tang dan\n");
	    printf("8. Tim kiem mot phan tu va in ra vi tri cua phan tu do trong mang\n");
		printf("9. Sap xep lai mang theo thu tu so le dung truoc so chan dung sau\n"); 
		printf("10. Kiem tra xem mang co phai mang tang dan hay khong\n"); 
		printf("11. Thoat khoi chuong trinh\n");
		printf("Moi ban nhap lua chon: ");
		scanf("%d", &choice);
		switch(choice){ 
			case 1:
				printf("\nNhap do dai cua mang: ");
				scanf("%d", &n);
				a = n;
				for(int i = 0; i < n; i++){
					check = 1;
					printf("Nhap phan tu arr[%d]: ", i);
					scanf("%d", &arr[i]);
				}
				break;
			case 2:
				if(check == 0){
					printf("\nBan chua them phan tu vao mang\n");
				}
				else{
					printf("\nCac phan tu trong mang la: ");
					for(int i = 0; i < n; i++){
						printf("%d ", arr[i]);
					}
					printf("\n");
				}
			    break;	
	        case 3:
			    break;
			case 4:
				if(check == 0){
					printf("\nTim gia tri nho thu 2 trong mang\n");
				}
				else{
				printf("\nGia tri nho thu 2 trong mang la: ");
				for(int i = 0; i < n; i++){
					count = 0;
					for(int j = 1; j <= n; j++){
						if(arr[i] % j == 0){
							count++;
						}
					}
					if(count == 2){
						printf("%d ", arr[i]);
					}
				}
				printf("\n");
			}
			    break;	
	        case 5:
	        	if(check == 0){
					printf("\nBan chua them phan tu vao mang");
				}
				printf("\nNhap vi tri can them phan tu: ");
				scanf("%d", &index);
				if(index > n){
					printf("\nVi tri ban nhap vuot qua do dai mang");
				}
				else{
					for(int i = n; i >= index; i--){
						arr[i] = arr[i-1];
					}
				}
				scanf("%d", &arr[index]);
				break;
			
			case 6:
			    break;	
	        case 7:
	        	int size; 
	            for(int i = 0;i < size ; i++ ){
        		int key = arr[i];
        		int j = i -1;
        		while ( j>= 0 && arr[j]>=key ){
        			arr[j+1] = arr[j];
        			j = j-1;
				}
				     arr[j+1]=key;
			}
                  printf("thu tu tang dan la : ");
          	    for(int i = 0;i < size ; i++ ){
          		  printf("%d", arr[i]);
			    }
		          printf ("\n");
		     break;
			case 8:
			    	
	        case 9:
			    break;
			case 10:
			    break;	
	        case 11:
	        	printf("Thoat khoi chuong trinh\n");
			break;
			default:
				printf("Vui long lua chon lai\n");			    
    } 
} 
	while(choice != 11);
	return 0;
} 
