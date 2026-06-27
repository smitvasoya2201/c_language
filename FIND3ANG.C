#include<stdio.h>
#include<conio.h>
void main(){
int angle1,angle2,angle3;
	clrscr();
printf("enetr angle 1: ");
scanf("%d",&angle1);
printf("enter angle 2: ");
scanf("%d",&angle2);
angle3 =180-angle1-angle2;
printf("angle 3 :%d ",angle3);
getch();
}