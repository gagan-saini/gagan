
#include <stdio.h>
#include <cs50.h>



int
main(void)
{
	string array1[4] = {"penny", "nickel", "dime", "quarter"};	
	int array[4] = {1, 5, 10, 25};
	int i, k, z;
    	/*for( i = 0; i < 14; i++)
    	{
        	printf("%d \n", array[i]);
	}*/
	float amount_paid, total_amount, amount_owed;
	printf("Please enter the amount paid: ");				
	amount_paid = GetFloat();
	printf("%.2f \n", amount_paid);
	printf("Please enter the Total amount: ");				
	total_amount = GetFloat();
	printf("%.2f \n", total_amount);
	amount_owed = amount_paid - total_amount;
	printf("Amount Owed: %f \n", amount_owed);
	k = (amount_owed * 1000);
	z = (amount_owed * 100) * 10; 	
	printf("%d, %d \n", k, z);
	int j, l, n;	
	j = 1;

	while(j == 1)
	{	
				
		for(i = 0; i < 4; i++)
		{
		    if(array[i] > k)     
		        break;
		    n = k - array[i];
		    //printf("%d \n", k);
		    l = i;	    	
		}
		n = k / array[l];		
		k = k % array[l];
		printf("%d coins of %s(%d¢) \n", n, array1[l], array[l]);
		if(k == 0)
		{
			break;
		}
		     
	}
	    
}
