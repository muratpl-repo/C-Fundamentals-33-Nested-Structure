#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct calisanlarGenel{
char unvan[20];
char rutbe[20];

};

struct calisanlar {

char ad[50];
char soyad[50];
char iseBaslangicTarihi[20];
float maas;
int primSayisi;
char cinsiyet;
struct calisanlarGenel genel;
};


int main()
{   setlocale(LC_ALL,"Turkish");

    struct calisanlar calisan1;


    strcpy(calisan1.genel.unvan,"Dr.");
    strcpy(calisan1.genel.rutbe,"Ast. Teg.");

    printf("%s\n",calisan1.genel.unvan);
    printf("%s\n",calisan1.genel.rutbe);


    return 0;
}
