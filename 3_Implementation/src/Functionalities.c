//#include "Functionalities.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
extern int Alift,Blift,choice1,person,x,y;
void status_of_lifts()
{
   
        printf("\nThe Alift is now on floor %d" ,Alift);
        printf("\nThe Blift is now on floor %d" ,Blift);
        printf("\n The Alift are used %d time(s)",x);
        printf("\n The Blift are used %d time(s)\n",y);
}
  void report()
{
	char message;
   FILE *fptr;
   fptr = fopen("G:/LTTS_260975_PROJECT/3_Implementation/reports.txt", "w");
      printf("Enter your report here!!");
 while((message=getche())!='\r')
   fputc(message,fptr);

   fclose(fptr);
	
	}

 int check_lift()
 {
int c,d;
 	   c=abs(Alift-person);
        d=abs(Blift-person);
        if(c<=d)
        {
        x+=1;	
      return 1;
      }
      else if(c>d){
      	y+=1;
       return 2;
      }
  }
 
  
  void AElevatorUp(int a)
    {
     printf("\nThe lift is on it's way up...");

        for (int i=Alift;i<=a;i++)
        {
        	Alift=i;
		            printf("%d->",Alift);

		        }

        printf("\nThe lift has arrived");
    }

   void AElevatorDown(int a)
    {
        printf("\nThe lift is on it's way down...");
        for (int i=Alift;i>=a;i--)
        {
        	Alift=i;

        printf("%d->",Alift);
    }

        printf("\nThe lift has arrived");
    }
void BElevatorUp(int a)
    {
     printf("\nThe lift is on it's way up...");

        for (int i=Blift;i<=a;i++)
        {
        	Blift=i;
		            printf("%d->",Blift);

		        }

        printf("\nThe lift has arrived");
    }
     void BElevatorDown(int a)
    {
        printf("\nThe lift is on it's way down...");
        for (int i=Blift;i>=a;i--)
        {
        	Blift=i;

        printf("%d->",Blift);
    }

        printf("\nThe lift has arrived");
    }
  

    

    

