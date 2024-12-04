#include<stdio.h>
int main(){
    int rows=0,i,j;
    int arr[100][100];
    while (1){
        int n = 0;
        printf("MENU\n");
        printf("1. nhap vao kich thuoc va gan gia tri cho mang\n");
        printf("2. in ra cac phan tu theo ma tran\n");
        printf("3. in ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("4. in ra cac phan tu nam tren duong cheo chinh\n");
        printf("5. in ra cac phan tu nam tren duong cheo phu\n");
        printf("6. sap xep cac phan tu tren duong cheo chinh theo thu tu tang dan\n");
        printf("7. tim kiem mot phan tu va in ra vi tri\n");
        printf("8. thoat\n");
        while (n < 1 || n > 8){
            printf("lua chon cua ban la: ");
            scanf("%d",&n);
        }
        if (n == 1){
            while (rows < 1){
                printf("hay nhap vao so hang va so cot <lon hon 0>: ");
                scanf("%d",&rows);
                arr[rows][rows];
            }
            for (i = 0; i < rows; i++){
                for (j = 0; j < rows; j++){
                    printf("hay nhap vao phan tu o hang %d cot %d: ",i+1,j+1);
                    scanf("%d",&arr[i][j]);
                }                
            }
        }else if (n == 2){
             for (i = 0; i < rows; i++){
                for (j = 0; j < rows; j++){
                    printf("%2d ",arr[i][j]);
                }
                printf("\n");
            }
        }else if (n == 3){
            long long tich = 1;
            printf("cac phan tu nam tren duong bien la: ");
             for (i = 0; i < rows; i++){
                for (j = 0; j < rows; j++){
                    if (i == 0 || i == rows -1 || j == 0 || j == rows - 1){
                        printf("%2d ",arr[i][j]);
                        tich *= arr[i][j];
                    }  
                }
            }
            printf("\n");
            printf("tong cau ca phan tu nam tren duong bien la: %lld\n",tich);
        }else if (n == 4){
            printf("cac phan tu nam tren duong cheo chinh la: ");
            for (i = 0; i < rows; i++){
                for (j = 0; j < rows; j++){
                    if (i == j){
                        printf("%2d ",arr[i][j]);
                    }
                }
            }
            printf("\n");
        }else if (n == 5){
            printf("cac phan tu nam tren duong cheo phu la: ");
            for (i = 0; i < rows; i++){
                for (j = 0; j < rows; j++){
                    if (i + j == rows - 1){
                        printf("%2d ",arr[i][j]);
                    }
                }
            }
            printf("\n");
        }else if (n == 6){
            for (i = 0; i < rows; i++){
                for (j = i + 1; j < rows; j++){
                    if (arr[i][i] > arr[j][j]){
                        int temp = arr[i][i];
                        arr[i][i] = arr[j][j];
                         arr[j][j] = temp;
                    }            
            	}
            }
        }else if (n == 7){
            int vitri = 0;
            int valur;
            printf("hay nhap vao phan tu bn muon tim: ");
            scanf("%d",&valur);
            for (i = 0; i < rows; i++){
                for (j = 0; j < rows; j++){
                    if (i == j);{
                        if (arr[i][j]==valur){
                            printf("phan tu %d nam o hang %d cot %d\n",valur,i+1,j+1);
                            vitri++;
                        }
                    }
                }
            }
            if (vitri == 0){
                printf("khong co %d trong mang",valur);
            } 
            printf("\n");
        }else if (n == 8){
            break;
        }else{
        	printf("lua chon khong hop le");
		} 
    }
    return 0;
}
