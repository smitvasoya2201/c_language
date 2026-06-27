/*                     auther:smit
		       doc : 25/06/2026
		       objectibe :starbug\
*/

#include<stdio.h>
#include<conio.h>

void main(){
int choice,qun;
clrscr();
printf("\t\t\t\t-------");
printf("\n\t\t\t\twelcome");
printf("\n\t\t\t\t-------");

printf("\n 1.coffee:");
printf("\n 2.tea :");
printf("\n 3.milk :");
printf("\n 4.juice :");
printf("\n 5.water :");
printf("\n 6.soda :");
printf("\nenetr your chice; ");
scanf("%d",&choice);


switch(choice){
case 1:printf("\ncoffee");

       printf("\n1.cappuccino");
       printf("\n2.latte");
       printf("\n3.nespresso");
       printf("\n4.americano");
       printf("\n5.mocha");

       printf("\n enetr your choice :");
       scanf("%d",&choice);
		     switch(choice){
			case 1:printf("\ncappuccino");
			       printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)151*qun);
			       break;
			case 2:printf("\nlatte");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)191*qun);
			       break;
			 case 3:printf("\nespresso");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)251*qun);
				break;
			 case 4:printf("\namericano");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)51*qun);
				break;
			 case 5:printf("\nmocha");
			       printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)351*qun);
				break;
		     }
		     //printf("\neneter quantity");
		    // scanf("%d",&qun);
		    // printf("\nyour bill is : %f",(float)151*qun);


	break;

case 2:printf("\ntea");

       printf("\n1.green tea");
       printf("\n2.black tea");
       printf("\n3.herbal tea");
       printf("\n4.chai tea");
       printf("\n5.earl grey tea");

       printf("enter your choice :");
       scanf("%d",choice);
	switch(choice){
			case 1:printf("\ngreen tea");
			       printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)151*qun);
			       break;
			case 2:printf("\nblack tea");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)191*qun);
			       break;
			 case 3:printf("\nherbal tea");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)251*qun);
				break;
			 case 4:printf("\nchai tea");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)51*qun);
				break;
			 case 5:printf("\nearl grey tea");
			       printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)351*qun);
				break;
		     }
		break;
case 3:printf("\nmilk");
       printf("\n1.whole milk");
       printf("\n2.skim milk");
       printf("\n3.soy milk");
       printf("\n4.almond milk");
       printf("\n5.oat milk");

       printf("\n enetr your choice :");
       scanf("%d",&choice);
		     switch(choice){
			case 1:printf("\nwhole milk");
			       printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)151*qun);
			       break;
			case 2:printf("\nskim milk");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)191*qun);
			       break;
			 case 3:printf("\nsoy milk");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)251*qun);
				break;
			 case 4:printf("\nalmond milk");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)51*qun);
				break;
			 case 5:printf("\noat milk");
			       printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)351*qun);
				break;
		     }

	 break;
case 4:printf("\njuice");
	printf("\n1.orange juice");
       printf("\n2.apple juice");
       printf("\n3.cranberry juice");
       printf("\n4.pineapple juice");
       printf("\n5.grape fruit");

       printf("\n enetr your choice :");
       scanf("%d",&choice);
		     switch(choice){
			case 1:printf("\n orange juice");
			       printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)151*qun);
			       break;
			case 2:printf("\napple juice");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)191*qun);
			       break;
			 case 3:printf("\ncranberry  juice");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)251*qun);
				break;
			 case 4:printf("\npineapple juice");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)51*qun);
				break;
			 case 5:printf("\ngrapefruit juice");
			       printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)351*qun);
				break;
		     }
	 break;
case 5:printf("\nwater");
	 printf("\n1.still water");
       printf("\n2.sparkling water");
       printf("\n3.flavored water");
       printf("\n4.mineral water");
       printf("\n5.infused water");

       printf("\n enetr your choice :");
       scanf("%d",&choice);
		     switch(choice){
			case 1:printf("\nstill water");
			       printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)151*qun);
			       break;
			case 2:printf("\nsparkling water");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)191*qun);
			       break;
			 case 3:printf("\nflavored water");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)251*qun);
				break;
			 case 4:printf("\minearal water");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)51*qun);
				break;
			 case 5:printf("\ninfused water");
			       printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)351*qun);
				break;
		     }
	break;
case 6:printf("\nsoda");
	       printf("\n1.cola");
       printf("\n2.lemon-lime soda");
       printf("\n3.ginger soda");
       printf("\n4.root beer");
       printf("\n5.orange soda");

       printf("\n enetr your choice :");
       scanf("%d",&choice);
		     switch(choice){
			case 1:printf("\ncola");
			       printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)151*qun);
			       break;
			case 2:printf("\nlemon - lime soda");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)191*qun);
			       break;
			 case 3:printf("\nginger soda");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)251*qun);
				break;
			 case 4:printf("\nroot bear");
				printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)51*qun);
				break;
			 case 5:printf("\norange soda");
			       printf("\n enetr quantity");
			       scanf("%d",&qun);
			       printf("your bill : %f ",(float)351*qun);
				break;
		     }
	break;


default :printf("not valide choice ");
}
 printf("\n\n\t\t\t\t \"thank you\"");
getch();
}