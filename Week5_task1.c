#include<stdio.h>
int main(){
int choice;

   printf("option      Bundle   cost(KES)\n\n");
   printf("   1     100mb       50    \n \n");
   printf("   2     500mb       200    \n\n");
   printf("   3     1GB         350    \n\n");
   printf("   4     2GB         600    \n\n");
         
         printf("Enter_the_your_choice\t");
         scanf("%d",&choice );
         printf("option\t bundle\t cost(KES)\n\n");
         
switch (choice){
case 1:
printf("1\t 100mb\t50\t\n"  );
break;

case 2 :
printf("2\t 500mb\t 200\t\n" );
break;

case 3:
printf("3\t 1GB\t 350\t\n" );
break;

case 4:
printf("4\t 2GB\t 600\t\n" );

 Error:
 printf("invalid choice" );
 }
    return 0;
}