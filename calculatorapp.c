#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int option ,n1,n2;
    float ans;
    char ch;
    
    
    do{
    printf("Select the Operation to be carried ");
    printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Exist \n");   
    printf("\n Your choice  ");
    scanf("%d",&option);   
       switch (option)  
    {  
        case 1:  

        // Adding of two numbers  
            printf (" You chose: Addition");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            ans = n1 + n2; // Add two numbers  
            printf (" Addition of two numbers is: %.2f", ans);  
            break; 
              
        case 2:  
        // Subtraction of two numbers  
            printf (" You chose: Subtraction");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            ans = n1 - n2;  
            printf (" Subtraction of two numbers is: %.2f", ans);  
            break;  
              
        case 3:  
        // Multiplication of two numbers  
            printf (" You chose: Multiplication");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            ans = n1 * n2;  
            printf (" Multiplication of two numbers is: %.2f", ans);  
            break; // break the function  
              
        case 4:  
            // Division of two numbers  
    
            printf (" You chose: Division");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            if (n2 == 0)  
                {  
                    printf (" \n Divisor cannot be zero. Please enter another value ");  
                    scanf ("%d", &n2);        
                }  
            ans = n1 / n2; 
            printf (" Division of two numbers is: %.2f", ans);  
            break;
              
        case 5:  
            // Getting square of a number  
            printf (" You chose: Square");  
            printf ("\n Enter the Number: ");  
            scanf (" %d", &n1);  
  
            ans= n1 * n1;  
            printf (" Square of %d number is: %.2f", n1, ans);  
            break; 
         case 6:
         printf("You choose exist");   
         exit(0);
         break;

}

printf("\n \n ***********************************************\n");
    }while (option!=7);
    return 0;
}
