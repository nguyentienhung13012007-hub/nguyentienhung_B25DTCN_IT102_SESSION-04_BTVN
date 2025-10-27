#include <stdio.h>
int main(){
	int a ,b ,c;
	printf("nhap a= ");
	scanf("%d",&a); 
    printf("nhap b= ");
	scanf("%d",&b); 
	printf("nhap c= ");
	scanf("%d",&c);
	if(a>b>c){
		printf("thu tu tang dan: %d %d %d ",c,b,a); 
	} else if (b>a>c){
		printf("thu tu tang dan: %d %d %d",c,a,b) ;
	} else if (c>a>b){
		printf("thu tu tang dan : %d %d %d",b,a,c);
		 
	} else{
	
		printf("thu tu tang dan: %d %d %d",a,b,c); 
	} 
	return 0; 
} 
