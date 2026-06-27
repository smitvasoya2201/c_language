/*         Auther:  smit
	   Doc   : 22-06-2026
	   objective : print all data types
 */
#include<stdio.h>
#include<conio.h>

void main(){
int n1=10,n2=20,n3=50,n4=60;
float f1=20.5,f2=30.5,f3=20.200;
char c1='a',c2='b',c3='c';
clrscr();
printf("print integer : %d",n1);
printf("\nprint interger 2 :%d",n2);
printf("\nprint integer 3 : %d",n3);
printf("\nprint interger 4 :%d",n4);

printf("\nfloat number 1 :%.1f",f1);
printf("\nfloat number 2 : %.2f",f2);
printf("\nfloat number 3 : %.3f",f3);

printf ("\ncharecter one  : %c",c1);
printf("\ncharecter two   : %c",c2);
printf("\ncharecter three : %c", c3);


getch();
}



