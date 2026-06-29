#include<stdio.h>
#include<conio.h>

void main(){
int num;
clrscr();
printf("enetr n");
scanf("%d",&num);
int n=(num>0)?1:(num<0)?-1:0;  ;
printf("%d",n);
getch();
}