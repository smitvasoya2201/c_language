//             Auther: Smit
//             doc:22-06-2026
//             objective :gross salary
#include<stdio.h>
#include<conio.h>
void main(){
float  salary,hra,da,ta;
clrscr();
printf("enetr base salary");
scanf("%f",&salary);
printf("enetr hra");
scanf("%f",&hra);
printf("enetr da");
scanf("%f",&da);
printf("enetr ta");
scanf("%f",&ta);

salary=  (salary*hra/100)+(salary*da/100)+(salary*ta/100);
printf("gross salary :%f",salary);
getch();
}