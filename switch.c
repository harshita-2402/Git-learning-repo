#include<stdio.h>
int main()
{
    int n;
    float a,b;
    printf("enter a and b:");
    scanf("%f%f",&a,&b);

    printf("1.addition\n2.subtraction\n3.multiply\n4.divide\n");
    printf("Enter Number for respective operation:");
    scanf("%d",&n);

     switch(n)
     {
        case 1:
        
            printf("\nAddition:");
            float add = a+b;
            printf("%.2f\n\n",add);
                break;    
        
        case 2:
        
            printf("\nSubtract:");
            float sub = a-b;
            printf("%.2f\n\n",sub);
                break;  
        
        case 3:
        
            printf("\nMultiplication:");
            float mul = a*b;
            printf("%.2f\n\n",mul);
                break;  
        
        case 4:
        
            printf("\nDivide:");
            float div = a/b;
            printf("%.2f\n\n",div);
                break;  
        
        default:
        
            printf("Invalid Input\n");
            return 0;
        

  }
 return 0;
}