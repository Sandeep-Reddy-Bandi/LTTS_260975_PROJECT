/**********************************************PREPROCESSORS**********************************************************/
//Lift Management System System
//including all libraries for now
#include "Functionalities.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int Alift=0,Blift=0,choice1,person,x=0,y=0;
 int main()
    {
    	int ch;
       while(1)
       { 
      printf("----------------------------------------------------------------------------\n");
      printf("\t\t\tLIFT MANAGEMENT SYSTEM\n");
      printf("\nENTER YOUR CHOICE\n 1.want to use the lifts\n 2.Check the status of the lifts\n 3.Report the lifts\n 4.exit the program\n");
      printf("-----------------------------------------------------------------------------\n");  
        scanf("%d",&ch);
     switch(ch)
    {
       case 1:
	 
         printf("\nWhich floor are you at now (0-10) where 0 = basement: ");
        scanf("%d",&person);

     if(check_lift()==1){
        if(Alift== person)
        {
            printf("\nEnter into the elevator");
      }

        else if(Alift> person)
        {
            AElevatorDown(person);
             printf("\nEnter into the elevator");
       
        }

        else if(Alift< person)
        {
            AElevatorUp(person);
             printf("\nEnter into the elevator");
       
        }

        printf("\nTo which floor would you want to go (0-10) where 0 = basement");
        scanf("%d",&choice1);
        if(Alift==choice1){
        	printf("Already you are in floor %d",choice1);
		}
        

       else if(Alift> choice1)
        {
            AElevatorDown(choice1);
            printf("\nyou reached to the floor %d",Alift);
        }

        else if(Alift< choice1)
        {
            AElevatorUp(choice1);
             printf("\nyou reached to the floor %d",Alift);

        }
}
else if(check_lift()==2)
{
        if(Blift== person)
        {
            printf("\nEnter into the elevator");
      }

        else if(Blift> person)
        {
            BElevatorDown(person);
             printf("\nEnter into the elevator");
       
        }

        else if(Blift< person)
        {
            BElevatorUp(person);
             printf("\nEnter into the elevator");
       
        }

        printf("\nTo which floor would you want to go (0-10) where 0 = basement");
        scanf("%d",&choice1);
         if(Blift==choice1){
        	printf("Already you are in floor %d\n",choice1);
		}

        if(Blift> choice1)
        {
            BElevatorDown(choice1);
            printf("\nyou reached to the floor %d\n",Blift);
        }

        else if(Blift< choice1)
        {
            BElevatorUp(choice1);
             printf("\nyou reached to the floor %d\n",Blift);

        }
        }  
          break;
      case 2:
            status_of_lifts();
           break;
     case 3:
         report();
         printf("Thanks for your Reporting we will work over it\n");
       break;
     case 4:
         exit(0);
      break;
          default:
          	printf("Enter valid input\n");
          	break;
      
 }
}
    
        getch();
        return 0;


    }

