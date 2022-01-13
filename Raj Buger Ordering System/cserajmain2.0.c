
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void mainburger_menuWindow();

void burgerCustomer();
void aboutus();



void vegburger(void);
void nonvegburger(void);


void burgerBilling(int);
void burgerDetails();

FILE *fp,*ft,*dp,*dt;

int s;
char findrecord;
int again;
int quantity;
double total=0;
int t;

int main()
{
    mainburger_menuWindow();
    return 0;
}

void mainburger_menuWindow()
{
    int choice;
    //system("cls");
	printf("                                WELCOME TO RAJ burger Palace\n");
    printf("\n\n\n          1. Burger Menu");
    printf("\n\n\n          2. About us   ");
    printf("\n\n\n             Enter Your Choice");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        burgerCustomer();
        break;
   case 2:
        aboutus();
        break;


    default:
        printf("\n\n Enter valid Entry \n\n\n ");
		mainburger_menuWindow();
    }

}


void burgerCustomer()
{
    system("cls");
    int choice;
	printf("                    |-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|WELCOME|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|\n\n");
    printf("               YOU ARE.................\n\n");
    printf("               1. veg burger Menu\n\n");
    printf("               2. nonveg burger Menu\n\n");
    printf("               3. Back To Main Menu\n\n");
    printf("   Enter Your Choice:");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        system("cls");
        vegburger();
        break;

    case 2:
        system("cls");
        nonvegburger();

    case 3:
        system("cls");
	    mainburger_menuWindow();
    default:
         system("cls");
        printf("\n INVALID CHOICE ");
        burgerCustomer();
        break;
    }

}
void aboutus()
{
    system("cls");
    printf("\n Burger palace was started in 2022 inside srm ktr campus. ");
    printf("\n we give free deliveries in and around cammpus in less than 30 mins.");
	printf("\n We also have our outlets in pune,mumbai,bangalore.");
    printf("\n\n|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|THANK YOU|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|");
	printf("\n\n");
	printf("    Press Any Key To Go Back.");
	if(getch())
    {
        system("cls");
	    mainburger_menuWindow();
    }
}


void vegburger()
{
    int choice;
	int again;
	int quantity;
	double price=0;
    char v;
	FILE *vmenu;

    printf("nveg burger Menu\n\n\n");
    vmenu=fopen("vegmenu.txt","rt");
	while((v=getc(vmenu))!=EOF)
        {
        	printf("%c",v);
		}
         fclose(vmenu);
    printf("\n\nEnter What You Want :");
	printf("\n\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 50*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			vegburger();
            break;

        case 2:
            burgerBilling(total);
            break;
        default:
            break;
        }

        break;

    case 2:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 60*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			vegburger();
            break;

        case 2:
            burgerBilling(total);
            break;
        default:
            break;
        }

        break;

    case 3:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 80*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			vegburger();
            break;

        case 2:
            burgerBilling(total);
            break;
        default:
            break;
        }

        break;

    case 4:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 80*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			vegburger();
            break;

        case 2:
            burgerBilling(total);
            break;
        default:
            break;
        }

        break;

    case 5:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 80*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			vegburger();
            break;

        case 2:
            burgerBilling(total);
            break;
        default:
            break;
        }

        break;

    default:
        printf("\n \n Enter valid no");
        break;
    }

}

void nonvegburger()
{
    int choice;
	int again;
	int quantity;
	double price=0;
    char nv;
	FILE *nvmenu;

    printf("nonveg burger Menu*\n\n");
    nvmenu=fopen("nonvegmenu.txt","rt");
	while((nv=getc(nvmenu))!=EOF)
        {
        	printf("%c",nv);
		}
         fclose(nvmenu);
    printf("\n\nEnter What You Want :");
	printf("\n\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 120*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			nonvegburger();
            break;

        case 2:
            burgerBilling(total);
            break;
        default:
            break;
        }

        break;

    case 2:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 140*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			nonvegburger();
            break;

        case 2:
            burgerBilling(total);
            break;
        default:
            break;
        }

        break;

    case 3:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 160*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			nonvegburger();
            break;

        case 2:
            burgerBilling(total);
            break;
        default:
            break;
        }

        break;

    case 4:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 180*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			nonvegburger();
            break;

        case 2:
            burgerBilling(total);
            break;
        default:
            break;
        }

        break;

    case 5:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 200*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			nonvegburger();
            break;

        case 2:
            burgerBilling(total);
            break;
        default:
            break;
        }

        break;

    default:
        printf("\n \n Enter valid no");
        break;
    }

}

void burgerBilling(int tot)
{
    int totl = total;
	FILE *ttl;
    ttl = fopen("order.txt","b");
    fprintf(ttl,"\nGrand Total : %d\n",totl);
    fclose(ttl);
	system("cls");
    burgerDetails();

}

void burgerDetails()
{
    char exit;
    int code;
	char name1[20];
	char name2[20];
	long long int phone;
	char address[40];
	char landmark[30];
    double tot = total;
	printf("Please Give Your Contact Details \n");
	printf(" First Name : ");
	scanf("%s",name1);
	printf("Last Name : ");
	scanf("%s",name2);
	printf("Phone : ");
	scanf("%lld",&phone);
	printf("Address : ");
	scanf("%s",address);
	printf("Landmark : ");
	scanf("%s",landmark);
	printf("\n\n");
	printf("Your Entered Details Are:\n");
	FILE *cust;
	cust = fopen("order.txt","a");
	fprintf(cust,"Order Placed By : %s %s\nPhone number : %lld\n",name1,name2,phone);
	fclose(cust);
	system("cls");
	printf("    First Name :  %s\n    -->Last Name   :  %s\n    -->Phone     :%lld \n    -->Address  :%s \n    -->Landmark  :%s \n\n    -->Your Total Amount Is : Rs %.2lf\n\n",name1,name2,phone,address,landmark,tot);
	printf("\n\n\n");


	printf("                                                       THANK YOU FOR ORDERING\n");


    printf("Press Any To The MainMenu");
    if(getch())
        burgerCustomer();
}
