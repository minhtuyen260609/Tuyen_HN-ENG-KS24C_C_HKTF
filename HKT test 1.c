#include<stdio.h>
int main(){
	int choice,n=0,i, max=0,position,value,j, element; 
	int arr[100]; 
	do{
		printf("MENU\n");
		printf("1. Nhap so phan tu can nhap va gia tri cac phan tu.\n");
		printf("2. In ra cac gia tri phan tu dang quan ly.\n");
		printf("3. In ra gia tri lon nhat cua mang.\n");
		printf("4. In ra cac phan tu la so nguyen to trong mang.\n");
		printf("5. Them mot phan tu vao trong mang.\n");
		printf("6. Xoa mot phan tu trong mang.\n");
		printf("7. Xap sep mang theo thu tu tang dan.\n");
		printf("8. Tim kiem phan tu(nguoi dung nhap) va in ra vi tri index cua phan tu do.\n");
		printf("9. Thoat .\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);
		
		if(choice==1){
			printf("moi nhap so phan tu : ");
			scanf("%d", &n);
			for(i=0;i<n;i++){
				printf("moi nhap phan tu thu %d: ", i+1);
				scanf("%d", &arr[i]); 
			} 
		}else if(choice==2){
			if(n==0){
				printf("mang rong"); 
			} else{
				printf("cac phan tu cua mang la: "); 
				for(i=0;i<n;i++){
					printf(" %d ", arr[i]); 
				}
			}printf("\n"); 
		}else if(choice==3){
			if(n==0){
				printf("mang rong"); 
			} else{
				max=arr[0];
				for(i=0;i<n;i++){
					if(max<arr[i]){
						max=arr[i]; 
					} 
				} 
				printf("gia tri lon nhat trong mang la: %d\n", max); 
			} 
		}else if(choice==4){
			if(n==0){
				printf("mang rong"); 
			} else{
				int sum = 0;
        		printf("Cac phan tu la so nguyen to: ");
            	for (i = 0; i < n; i++) {
                	if (arr[i] < 2) {
                    	continue; 
                	}
                int isPrime = 1;
                for (j = 2; j * j <= arr[i]; j++) { 
                    if (arr[i] % j == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime) {
                    printf("%d ", arr[i]);
                    sum += arr[i];
                }
            }
            printf("\nTong cac phan tu la so nguyen to: %d\n", sum);
     	   }
     	}else if(choice==5){
			do {
        		printf("\nMoi nhap vi tri can them (1 -> %d): ", n + 1);
        		scanf("%d", &position);
    		} while (position < 1 || position > n + 1);

    			printf("Moi nhap gia tri can them: ");
    			scanf("%d", &value);

    			for (i = n; i >= position; i--) {
        			arr[i] = arr[i - 1];
    			}
    			arr[position - 1] = value;
    			n++; 
		}else if(choice==6){
			if(n==0){
				printf("mang rong"); 
			} else{
				do {
        			printf("\nMoi nhap vi tri can xoa: ", n);
        			scanf("%d", &position);
    			} while (position < 1 || position > n);
    			for (i = position - 1; i < n - 1; i++) {
        		arr[i] = arr[i + 1];
    			}
    			n--;
			}
		}else if(choice==7){
			if(n==0){
				printf("mang rong"); 
			} else{
				for (j=0;j<n-1;j++) {
        			for (i=0;i<n-1;i++) {
            			if (arr[i]>arr[i + 1]) {
                			int temp = arr[i];
                			arr[i] = arr[i + 1];
                			arr[i + 1] = temp;
            			}
        			}
    			}
			}
		}else if(choice==8){
			if(n==0){
				printf("mang rong"); 
			} else{
				printf("\nmoi nhap phan tu can tim: ");
    			scanf("%d", &element);
    			int found = 0;
    			for (i = 0; i<n;i++) {
        			if (arr[i] == element) {
            			printf("phan tu can tim dang o vi tri so: %d\n", i+1);
            			found = 1;
        			}
    			}
    			if (!found) {
        			printf("phan tu can tim khong co trong mang\n", element);
    			}
			}
		}else if(choice==9){
			printf("thoat"); 
		} 
	}while(choice!=9);
	
	return 0;
}
