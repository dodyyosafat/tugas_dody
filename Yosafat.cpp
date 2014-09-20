#include <stdio.h>                                  
#include <conio.h>

main()
{
	float f;
   float r;
   float c;
   c=0;
	printf("Tugas Kuliah konvensi suhu Fahrenheit,Reamur,Celsius""\n""Masukkan suhu celsius : ");
   scanf("%f",&c);
   f=c*9/5+32;
   r=c*4/5;
   printf("jadi %2.4f derajat Fahrenheit sama dengan %2.4f derajat Reamur dan %2.4f derajat Celsius",f,r,c);
	getch();
}

