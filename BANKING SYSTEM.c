#include<stdio.h>                                                                                                                                       
void main()                                                                     
{                                                                               
float acc,bal=0, dep, with_draw;                                              
float ci;                                                                      
int op,i;
int flag=0,k=0;                                                                       
float arr[10][2]={{12345,1100.0},{12346,1200.0},{12347,123889.0},{12305,3568.7},{21086,7869.9},{96179,89652.2},{12097,9795.8},{90753,918.8},{75381,42.3},{87655,98229.0}};  
printf("\nBanking System");                                                   
printf("\n................"); 
printf("\nEnter account number: ");  
scanf("%f", &acc);
for(i=0;i<10;i++)
{    
if(acc==arr[i][0])   
{
flag=1;
k=i;
break;
}  
}
if(flag==0)
{
printf("Invalid account number\n");
}                                
else{    
bal=arr[k][1];         
while(1)                                                                       
{                                                                              
                                                  
  printf("\n1 ->Deposit");                                                     
  printf("\n2 ->Withdraw");                                                    
  printf("\n3 ->Balance");                                                     
  printf("\n4 ->Interest");                                                    
  printf("\n5 ->Quit");                                                        
  printf("\nEnter your operation: ");                                                
  scanf(" %d", &op);                                                            
  switch(op)                                                                    
  {                                                                             
   case 1:                                                                    
     printf("\nEnter deposit amount: ");                                        
     scanf("%f", &dep);                                                     
     bal += dep;  
     printf("\nAmount after deposition is: %.2f", bal);                                                      
     break;                                                                     
   case 2:                                                                    
     printf("\nEnter with_draw amount: ");                                       
     scanf("%f", &with_draw);             
     if(bal>=with_draw)
     {                                       
     	bal -= with_draw;  
     	printf("\nAmount after withdrawal is: %.2f", bal);
     }  
     else
     	printf("Balance is less than the withdrawal amount");                                                    
     break;                                                                     
   case 3:                                                                    
     printf("Balance in your account: %.2f", bal);                                            
     break;                                                                     
   case 4:                                                                    
     ci = bal*4/100;                                                 
     bal += ci;                                                             
     printf("\nInterest: %f", ci); 
     printf("\nTotal balance along with interest: %.2f", bal);                                             
     break;                                                                     
   case 5:                                                                    
     return;                                                                    
   default:                                                                     
     printf("Invalid Operation!");                                              
  }                                                                             
}
}                                                                             
}

