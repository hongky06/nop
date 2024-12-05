#include<stdio.h>
int main (){
int chon,cols;
int arr[50] ;
  do{
   printf (" \n menu");
   printf("\n 1. nhap so luong phan tu cho mang");
   printf ("\n 2. in ra cac phan tu ");
   printf("\n 3. so luong so hoan hao trong mang ");
   printf("\n 4. gia tri lon thu hai trong mang la ");
   printf(" \n 5. them mot phan tu vao vi tri ngau nhien trong bang ");
   printf("\n 6. xoa phan tu ");
   printf("\n 7. sap ep mang theo thu tu tang dan ");
   printf (" \n 8. nhap phan tu vaof trong hamf xet xem co phan tu trong ham hay k ");
   printf("\n 9. sap xet chan truoc le sau ");
   printf("\n10. dao nguoc thu tu trong mang");
   printf("\n 11. thoat  ");
   printf("\n  ban chon : ");
   scanf("%d",&chon);
  	
switch(chon){
    	case 1:                     
    		printf("hay nhap so luong phan tu  ");
    		scanf("%d",&cols);
    		for(int i = 0;i < cols;i++){
    			printf("[%d] = ",i);
    			scanf("%d",&arr[i]);
			}
    	
			break;
		case 2 :
		for(int i = 0;i < cols ; i++ ){
			printf("%d",arr[i]);
		}
		    break;	
        
        
	     
		
		
		
		
		case 7:
        	for(int i = 0;i < cols ; i++ ){
        		int bien = arr[i];
        		int j = i -1;
        		while ( j>= 0 && arr[j]>=bien ){
        			arr[j+1] = arr[j];
        			j = j-1;
				}
				     arr[j+1]=bien;
			}
               printf("(thu tu tang dan la : ");
          	for(int i = 0;i < cols ; i++ ){
          		printf("%d", arr[i]);
			  }
		  printf ("\n");
		     break; 
		
		
		
		
		
			case 8:
            int so,a;
			printf ("nhap phan tu ");
        	scanf("%d",&so);
        	for(int i = 0 ;i < cols ;i++){
        		if (so == arr[i]){
        			a=1;
        			break;
				}else{
					a=0;
					 break;
				}
		    }
				if(a==1){
        	   	     printf(" co phan tu trong mang ");
			    }else if( a==0) {
				     printf (" ko co phan tu trong mang ");
		        }
                break;
		
		
		
		
		    case 10: 
             for (int i = cols-1 ; i >= 0; i--){
                     printf("%d",arr[i]);	
		     }
                break;
			
            



}//whitch 

    } while(chon!=11);
return 0; 
}
