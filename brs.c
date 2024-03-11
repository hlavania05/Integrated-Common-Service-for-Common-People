#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

// Structure =  group variable into one place.
// define with struct keyword.
// Structure can contain many different data types. (int,float,char etc).
  
typedef struct{
	char name[50];         // Store name of user
	int bus_num;           // Stores bus number
	int num_of_seats;      // Total no. of seats
}pd;



void reservation(void);        // To reverse seat in bus.
void viewdetails(void);        // To view the deatils of all buses available.
void printticket(char name[],int,int,float);
void specificbus(int);         // to print details of specific bus.
float charge(int,int);         // To calculate fair for total seats. 



int main()

{
	system("cls");
	printf("\t\t||          BUS TICKET RERSERVATION SYSTEM          ||\n");
    printf("\t\t------------------------------------------------------\n");
    printf("\t\t---------------Press Any Key To Continue--------------\n");
    printf("\t\t------------------------------------------------------\n");
	getch();
    system("cls");
    
	int menu_choice, choice_return;
	
	start:
	system("cls");
	printf("\n=================================\n");
	printf("       BUS RESERVATION SYSTEM        " );
	printf("\n=================================");
	printf("\n1>> Reserve A Ticket");
	printf("\n------------------------------");
	printf("\n2>> View All Available Bus");
	printf("\n------------------------------");
	printf("\n3>> Exit");
	printf("\n------------------------------");
	printf("\n\n-->");
	
	scanf("%d",& menu_choice);
	
	switch(menu_choice)
	{
		case 1:
			reservation();
			break;
		case 2:
			viewdetails();
			printf("\n\nPress any key to go to Main Menu..");
			getch();
			break;
		case 3:
			return(0);
		default:
			printf("\nInvalid choice");
	}
	goto start;
	return(0);
}

void viewdetails(void)
{
	system("cls");
	printf("\nBUS.No\tBUS Name\tDestinations\t\t\tFare\t\tTime\n");
	printf("\n533101\tBus A\tMathura to Amritsar \t\t        Rs.5000\t\t9am");
	printf("\n533102\tBus B\tMathura to Jaipur \t\t\tRs.1000\t\t10am");
	printf("\n533103\tBus C\tMathura to Udaipur\t\t        Rs.2000\t\t8am");
	printf("\n533104\tBus D\tMathura to Delhi\t\t        Rs.500\t\t11am");
	printf("\n533105\tBus E\tMathura to Bhopal\t\t        Rs.1000\t\t7am");
	printf("\n533106\tBus A\tMathura to Delhi\t\t        Rs.500\t\t9am");
	printf("\n533107\tBus B\tMathura to Jaipur\t\t        Rs.1000\t\t3pm");
	printf("\n533108\tBus C\tMathura to Indore\t\t        Rs.2200\t\t8am");
	printf("\n533109\tBus D\tMathura to Bhopal\t\t        Rs.1000\t\t6pm");
	printf("\n533110\tBus E\tMathura to Jalandar\t\t        Rs.2500\t\t8pm");
	
}

void reservation(void)
{
	char confirm;
	int i = 0;
	float charges;
	pd passdetails;
	
	FILE *fp;
	fp=fopen("seats_reserved.txt","a");
	system("cls");

	printf("\nEnter Your Name:> ");
	fflush(stdin);
	gets(passdetails.name);

	printf("\nEnter Number of seats:> ");
	scanf("%d",&passdetails.num_of_seats);
	
	
	printf("\n\n>>Press Enter To View Available Bus<< ");
	getch();
	
	system("cls");
	viewdetails();
	printf("\n\nEnter bus number:> ");
	start1:
	scanf("%d",&passdetails.bus_num);
	
	if(passdetails.bus_num>=533101 && passdetails.bus_num<=533110)
	{
		charges=charge(passdetails.bus_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.bus_num,charges);
	}
	else
	{
		printf("\nInvalid bus Number! Enter again--> ");
		goto start1;
	}

	printf("\n\nConfirm Ticket (y/n):>");
	start:
	scanf(" %c",&confirm);
	if(confirm == 'y')
	{
		fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",&passdetails.name,passdetails.num_of_seats,passdetails.bus_num,charges);
		printf("=========================");
		printf("\n Reservation successful\n");
		printf("=========================");
		printf("\nPress any key to go back to Main menu");
	}
	else
	{
		if(confirm=='n'){
			printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
		}
		else
		{
			printf("\nInvalid choice entered! Enter again-----> ");
			goto start;
		}
	}
	fclose(fp);
	getch();
}

float charge(int bus_num,int num_of_seats)
{
	if (bus_num==533101)
	{
		return(5000.0*num_of_seats);
	}
	if (bus_num==533102)
	{
		return(1000.0*num_of_seats);
	}
	if (bus_num==533103)
	{
		return(2000.0*num_of_seats);
	}
	if (bus_num==533104)
	{
		return(500.0*num_of_seats);
	}
	if (bus_num==533105)
	{
		return(1000.0*num_of_seats);
	}
	if (bus_num==533106)
	{
		return(500.0*num_of_seats);
	}
	if (bus_num==533107)
	{
		return(1000.0*num_of_seats);
	}
	if (bus_num==533108)
	{
		return(2200.0*num_of_seats);
	}
	if (bus_num==533109)
	{
		return(1000.0*num_of_seats);
	}
	if (bus_num==533110)
	{
		return(2500.0*num_of_seats);
	}
}

void printticket(char name[],int num_of_seats,int bus_num,float charges)
{
	system("cls");
	printf("-------------------------\n");
	printf("\tTICKET\n");
	printf("-------------------------\n\n");
	printf("Name:\t\t\t%s",name);
	printf("\nNumber Of Seats:\t%d",num_of_seats);
	printf("\nBus Number:\t\t%d",bus_num);
	specificbus(bus_num);
	printf("\nCharges:\t\t%.2f",charges);
}

void specificbus(int bus_num)
{

	if (bus_num==533101)
	{
		printf("\nBus:\t\t\tBUS A");
		printf("\nDestination:\t\tMathura to Amritsar");
		printf("\nDeparture:\t\t9am ");
	}
	if (bus_num==533102)
	{
		printf("\nBus:\t\t\tBUS B");
		printf("\nDestination:\t\tMathura to Jaipur");
		printf("\nDeparture:\t\t10am");
	}
	if (bus_num==533103)
	{
		printf("\nBus:\t\t\tBUS C");
		printf("\nDestination:\t\tMathura to Udaipur");
		printf("\nDeparture:\t\t8am");
	}
	if (bus_num==533104)
	{
		printf("\nBus:\t\t\tBUS D");
		printf("\nDestination:\t\tMathura to Delhi");
		printf("\nDeparture:\t\t11am ");
	}
	if (bus_num==533105)
	{
		printf("\nBus:\t\t\tBUS C");
		printf("\nDestination:\t\tMathura to Bhopal");
		printf("\nDeparture:\t\t7am");
	}
	
	
	if (bus_num==533106)
	{
		printf("\nBus:\t\t\tBUS A");
		printf("\nDestination:\t\tMathura to Delhi");
		printf("\nDeparture:\t\t9am ");
	}
	if (bus_num==533107)
	{
		printf("\nBus:\t\t\tBUS B");
		printf("\nDestination:\t\tMathura to Jaipur");
		printf("\nDeparture:\t\t3pm");
	}
	if (bus_num==533108)
	{
		printf("\nBus:\t\t\tBUS C");
		printf("\nDestination:\t\tMathura to Indore");
		printf("\nDeparture:\t\t8am");
	}
	if (bus_num==533109)
	{
		printf("\nBus:\t\t\tBUS D");
		printf("\nDestination:\t\tMathura to Bhopal");
		printf("\nDeparture:\t\t6pm ");
	}
	if (bus_num==533110)
	{
		printf("\nBus:\t\t\tBUS C");
		printf("\nDestination:\t\tMathura to Jalandar");
		printf("\nDeparture:\t\t8pm");
	}

}