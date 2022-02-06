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

void volumetabung(){
    tabung.volume = phi * tabung.r * tabung.r * tabung.t ;
    printf("Volume Tabung = %d\n", tabung.volume);
    }

void LPtabung(){
    tabung.LP = 2*phi*tabung.r*(tabung.r+tabung.t);
    printf("Luas Permukaan Tabung = %d\n", tabung.LP);
    }

void LStabung(){
    tabung.LS = 2*phi*tabung.r*tabung.t;
    printf("Luas Selimut Tabung = %d\n", tabung.LS);
    }

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

