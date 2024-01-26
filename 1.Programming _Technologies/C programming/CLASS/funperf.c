void perfect()  
{  

int num, rem, sum = 0, i;  
 
printf("Enter a number\n");  
scanf("%d", &num);      
  
for(i = 1; i < num; i++)  
                     {  
                              rem = num % i;  
                             if (rem == 0)  
                                        {  
                                               sum = sum + i;  
                                         }  
                        }  
if (sum == num)  
                      printf("it is a Perfect Number");  
           else  
                      printf("\nit is not a Perfect Number");

}

int main() 
{
perfect(); 
return 0;
}  
