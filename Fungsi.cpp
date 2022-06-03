#include<iostream>
using namespace std;
#define phi 3.14

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
