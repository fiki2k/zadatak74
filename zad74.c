// Program ce izracunat povrsinu baze piramide.

#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

//Funkcija za povrsine baze piramide.
float povrsina(int a,int h){
	
	//Bazu racunamo kao da je cetverostrana piramida.
	double B= (1.0/3.0) *h* (a*a);
	return B;
}

int main(){
   int a,h;
   printf("Unesi duljinu strane piramide:\n");
   scanf("%d",&a);
   printf("Unesi visinu piramide:\n");
   scanf("%d",&h);
   float B=povrsina(a,h);
   printf("Povrsina baze piramide je %f\n",B);
   return 0;
}
