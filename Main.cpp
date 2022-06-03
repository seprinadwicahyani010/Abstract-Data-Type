#include <stdio.h>
#include <conio.h>
#define phi 3.14

struct {
    int r;
    int t;
    int volume;
    int LP;
    int LS;
} tabung ;

int main(){
	printf("MENGHITUNG VOLUME, LUAS PERMUKAAN DAN SELIMUT TABUNG\n");
	printf("----------------------------------------------------\n");
	printf("Masukkan nilai Jari-jari(r) dan nilai tinggi (t)\n");
	printf("r = ");scanf("%d", &tabung.r);
	printf("t = ");scanf("%d", &tabung.t);
	volumetabung();
	LPtabung();
	LStabung();
	return 0;
}

