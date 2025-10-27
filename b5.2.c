#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap a: ");
	scanf("%d",&a);
		printf("nhap b: ");
	scanf("%d",&b);
		printf("nhap c: ");
	scanf("%d",&c);
	if(c>a&&c<b){
		printf("so thu  3 nam trong khoang giua 2 so 1 va 2 . \n");
	}else{
		printf("so thu  3 khong nam trong khoang giua 2 so 1 va 2 . \n");
	}
	
	return 0;
}

