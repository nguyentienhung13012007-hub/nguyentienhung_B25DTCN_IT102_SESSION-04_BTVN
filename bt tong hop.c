#include <stdio.h>
int main(){
	int year;
	float diemTb;
	int tuoi;
	char hocLuc; 
	printf("nhap nam sinh : ");
	scanf("%d",&year);
	printf("nhap diem tb : ");
	scanf("%f",&diemTb);
	if(year>1900 && year<=2025){
		printf("nam sinh hop le \n");
	}else{
		printf("nam sinh khong hop le\n");
	}
	tuoi=2025-year ;
	if(tuoi>=18){
		printf("du 18 tuoi.\n");
		
	}else{
		printf("khong du 18 tuoi.\n");
		
	}
	printf("xep loai: "); 
	if(diemTb<5.0){
		printf("yeu\n");
		
	}else if(diemTb<=6.4){
		printf(" trung binh\n");
	}else if(diemTb<7.9){
		printf("kha\n");
	}else{
		printf("gioi\n");
	}

	printf("tuoi: %d\n",tuoi);

	return 0;
}
 
