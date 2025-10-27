#include <stdio.h>
int main(){
	
	int a ,b ,c  ;
	printf("nhap a: ");
	
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	printf("nhap c: ");
	 
	scanf("%d",&c); 
	if(a+b>c&&a+c>b&&b+c>a){
		printf("la 3 canh tam giac\n"); 
	} else{
		printf("khong phai 3 canh tam giac\n"); 
	} 
	return 0;
	 
}
