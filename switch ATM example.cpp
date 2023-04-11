#include <stdio.h>

int main(){
	
	int islem;
	int bakiye= 3000;
	int tutar;
	
	printf("Islemler\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye sorgulama\n5:Kart iade\n\n\n");
	printf("Islem seciniz:");
	scanf("%d",&islem);
	
	switch(islem) {
		case 1:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Cekilecek tutar:");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				printf("Yetersiz bakiye.\n");
			}
			else
			bakiye -= tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
		case 2:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Girilecek tutar:");
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
		case 3:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Havale yapilacak tutar:");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				printf("Yetersiz bakiye.\n");
			}
			bakiye -= tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
		case 4:
			printf("Bakiyeniz: %d\n",bakiye);
			break;
		case 5:
			printf("Kartiniz geri verildi");
			break;
		default:
			printf("Hatali islem");
			break;
	}
}
