#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int menu();
void deposit();
void withdraw();
void transfer();
void checkdetails();
void summary();

int totalamount=1000000,damo,wamo,tamo,totaldeposit=0,totalwithdrawn=0,totaltransferred=0;
int ACC;
char a[20];
void main()
{

    printf("\nEnter your name :");
    scanf("%s",a);
    printf("\nEnter your account number :");
    scanf("%d",&ACC);
    while(1)
    {

    switch(menu())
    {
        case 1:
        deposit();
        totaldeposit+=damo;
        printf("your current balance is %d",totalamount);
        break;
        case 2:
        withdraw();
        if(wamo<=totalamount)
        totalwithdrawn+=wamo;
        printf("your current balance is %d",totalamount);
        break;
        case 3:
        transfer();
        if(tamo<=totalamount)
        totaltransferred+=tamo;
        printf("your current balance is %d",totalamount);
        break;
        case 4:
        checkdetails();
        break;
        case 5:
        summary();
        getch();
        exit(0);
        default:
        printf("\nInvalid choice");
    }
    getch();
    }
    }
int menu()
{
    int n;
    printf("\n 1. DEPOSIT AMOUNT:");
    printf("\n 2. WITHDRAW AMOUNT :");
    printf("\n 3. TRANSFER AMOUNT :");
    printf("\n 4. VIEW TRANSACTION HISTORY :");
    printf("\n 5. EXIT WITH SUMMARY:");
    printf("\n ENTER YOUR CHOICE :");
    scanf("%d",&n);
    return(n);
}
void deposit()
{
    printf("\nEnter the amount you want to deposit :");
    scanf("%d",&damo);
    totalamount+=damo;
}
void withdraw()
{
    printf("\nEnter the amount you want to withdraw :");
    scanf("%d",&wamo);
    if(wamo<=totalamount)
    totalamount-=wamo;
    else
    printf("\nWithdrawal amount exceeds the account balance");
}
void transfer()
{
    printf("\nEnter the amount you want to tranfer :");
    scanf("%d",&tamo);
    if(tamo<=totalamount)
    totalamount-=tamo;
    else
    printf("\nTransfer amount exceeds the account balance");
}
void checkdetails()
{
    printf("\nTotal amount = %d",totalamount);
    printf("\nAmount deposited = %d",totaldeposit);
    printf("\nAmount withdrawn = %d",totalwithdrawn);
    printf("\nAmount transferred = %d",totaltransferred);
}
void summary()
{
    printf("\n*******************************\n");
    printf("\nYour name = %s",a);
    printf("\nAccount Number = %d",ACC);
    printf("\nTotal amount = %d",totalamount);
    printf("\nTotal amount deposited = %d",totaldeposit);
    printf("\nTotal amount withdrawn = %d",totalwithdrawn);
    printf("\nTotal amount transferred = %d",totaltransferred);
    printf("\n \n *****THANK YOU*****");
}

