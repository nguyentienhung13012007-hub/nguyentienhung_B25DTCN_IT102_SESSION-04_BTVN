#include <stdio.h>
int main(){
	int n;
	printf("nhap thang: ");
	scanf("%d",&n);
 switch(n){
 	case 1:
	 printf("c� 31 ngay");
	 break;
	case 2:
	printf(" c� 28 hoac 29 ngay");
	break;  
	case 3:
	printf(" c� 31 ngay");
	break;
	case 4:
	printf(" c� 30 ngay");
	break;
	case 5:
	printf(" c� 31ngay");
	break;
	case 6:
	printf(" c� 30 ngay");
	break;
	case 7:
	printf(" c� 31 ngay");
	break;
	case 8:
	printf(" c� 31 ngay");
	break;
	case 9:
	printf(" c� 30 ngay");
	break;
	case 10:
	printf(" c� 3 ngay");
	break;
	case 11:
	printf(" c� 30 ngay");
	break;
	case 12:
	printf(" c� 31 ngay");
	break;
	default:
	printf("thang khong hop le"); 
 
} 
	return 0;
}
