
#include<stdio.h>

struct customer{
int accno;
char *name;
float balance;
}s[10];

void check();
void Deposit();
void Withdrawal();

int main(int argc, char const *argv[])
{ int ch;
s[0].name="Aarya";
s[1].name= "Riya";
s[2].name="Rahul";
s[3].name="Rohit";
s[4].name="Aditi";


for(int i=0;i<5;i++)
{   s[i].accno=100+i;
    s[i].balance=1000;
}
    while(1)
    {
        printf("\n\nWhat would you like to do?");
        printf("\n1.Withdrawal");
        printf("\n2.Deposit");
        printf("\n3-To check info about customers with balance<100"); 
        printf("\nEnter your choice: "); 
        scanf("%d",&ch); 
        printf("-----------------------------------------------------------");
        switch(ch) 
        {
          case 1:Withdrawal();
          break;
          case 2:Deposit();
          break;
          case 3:check();
          break;
          default:printf("Invalid choice");
        }
    }
    
    return 0;
}

void check() 
{
     printf("\nCustomer Details whose Balance < 100 Rs. \n");
     for(int j=0;j<5;j++)
     {
          if(s[j].balance<100)
          {
               printf("Account Number : %d\n",s[j].accno);
               printf("Name           : %s\n",s[j].name);
               printf("------------------------------\n");
          }
     }
}
void Deposit()
{
int a=0,no;
float d;
printf("\nEnter your Account Number: "); 
scanf("%d",&no); 
for(int i=0;i<5;i++) 
{ 
  if(s[i].accno == no) 
      a = i; 
}
   if(s[a].accno == no) 
  { 
   printf("\n How much you want to deposit:  "); 
   scanf("%f",&d);
   printf("\n Account Number :  %d",s[a].accno); 
   printf("\n Name :  %s",s[a].name);  
   s[a].balance+=d; 
   printf("\nUpdated  Amount is :%f",s[a].balance); 
   printf("\nAmount deposited: %f",d);
   printf("\nCode: 1");
   printf("\n-----------------------------------------------------------");
 } 
  else 
  { 
     printf("\nACCOUNT NUMBER IS INVALID"); 
    }

}
void Withdrawal()
{

int no,b=0,m=0; 
float w;                     
                     
printf("\nEnter your Account Number: "); 
scanf("%d",&no); 
    for(b=0;b<5;b++) 
     { 
        if(s[b].accno == no) 
            m = b; 
     } 
    if(s[m].accno == no) 
     { 
        printf("\n How Much would you like to Withdraw? : "); 
        scanf("%f",&w); 
        printf("\n Account Number : %d",s[m].accno); 
        printf("\n Name :  %s",s[m].name); 
        s[m].balance-=w; 
        printf("\nAmount withdrawn:  %f",w);
        printf("\nThe Balance Amount is:%f",s[m].balance); 
        printf("\nCode: 0");
        printf("\n-----------------------------------------------------------");
                       
    } 
    else 
    { 
        printf("\nThe balance is insufficient for the specified withdrawal"); 
                                        
    } 
                                       
} 

