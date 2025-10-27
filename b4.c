#include <stdio.h>
int main(){
	int n;
	printf("nhap thang: ");
	scanf("%d",&n);
 switch(n){
 	case 1:
	 printf("có 31 ngay");
	 break;
	case 2:
	printf(" có 28 hoac 29 ngay");
	break;  
	case 3:
	printf(" có 31 ngay");
	break;
	case 4:
	printf(" có 30 ngay");
	break;
	case 5:
	printf(" có 31ngay");
	break;
	case 6:
	printf(" có 30 ngay");
	break;
	case 7:
	printf(" có 31 ngay");
	break;
	case 8:
	printf(" có 31 ngay");
	break;
	case 9:
	printf(" có 30 ngay");
	break;
	case 10:
	printf(" có 3 ngay");
	break;
	case 11:
	printf(" có 30 ngay");
	break;
	case 12:
	printf(" có 31 ngay");
	break;
	default:
	printf("thang khong hop le"); 
 
} 
	return 0;
}
