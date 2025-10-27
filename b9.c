#include <stdio.h>
int main() {
	int hopLe=1; 
	int ngay,thang,nam;
	printf(" nhap ngay:");
	scanf("%d",&ngay); 
	printf(" nhap thang:");
	scanf("%d",&thang); 
	printf(" nhap nam:");
	scanf("%d",&nam);
	if(1>thang||thang>12){
	hopLe = 0 ; 
 
	}else{
	 int soNgayTrongThang; 
	switch(thang){
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	 soNgayTrongThang =31;
	 break; 
	case 4: case 6: case 9: case 11:
	soNgayTrongThang = 30;
	break;
	case 2:
		if((nam %4 ==0 && nam %100 !=0)||(nam%400 ==0)) 
	 soNgayTrongThang =29;
	 else
	 soNgayTrongThang =28 ;
	 break;
	 default:
	 soNgayTrongThang = 0;
 }
	 if (ngay<1||ngay>soNgayTrongThang)
	 hopLe = 0; 
}
	  if(hopLe)
	 printf("ngay thang nam hop le \n");
	 else 
	 printf("Ngay thang nam khong hop le \n"); 
	return 0; 
} 
