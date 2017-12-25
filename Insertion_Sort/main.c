#include<stdio.h>
#include<stdlib.h>
int dizi[100];
int key;

void Insertion_Sort(int dizi[],int ElemanSayisi){
	int i,j;
	for(i=1;i<ElemanSayisi;i++){
		key=dizi[i];
		j=i-1;
		while(key<dizi[j] && j>=0){
			dizi[j+1]=dizi[j];
			j--;
		}
		dizi[j+1]=key;			
	}
}


int main(){
	int i,ElemanSayisi;

	printf("Eleman Sayısı giriniz:");
	scanf("%d",&ElemanSayisi);
	//Kullanıcıdan dizinin elemanlarını aldık.
	for(i=0;i<ElemanSayisi;i++){
		printf("%d.elemanı giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	//Diziyi ekrana yazdık
	for(i=0;i<ElemanSayisi;i++){
		printf("%d 	",dizi[i]);
	}
	printf("\n");

	//Diziyi sıralamak için fonksiyona gönderdik.
	Insertion_Sort(dizi,ElemanSayisi);

	//Sıralı diziyi ekrana yazdık.
	for(i=0;i<ElemanSayisi;i++){
		printf("%d 	",dizi[i]);
	}
	printf("\n");

return 0;
}
