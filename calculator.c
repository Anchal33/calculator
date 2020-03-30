#include<stdio.h>
int main()
{
    int choice,i,n,n2,res;
    float n1,result;
    printf("\t**SMART CALCULATOR**\n\n");
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    printf("Press 5 for modulus\n");
          printf("Your choice is : ");
          scanf("%d",&choice);
          if (choice>5)
            printf("invalid choice\n");
          else
          {



     printf("Enter the no. of input values :\n");
     scanf("%d",&n);
     switch(choice)
  {
      case 1 :
         result=0;
        for(i=1;i<=n;i++)
                 {
                   printf("Enter num : \t");
                   scanf("%f",&n1);
                    result=result+n1;
                }
                printf("Result is : %f\t",result);
                break;

      case 2 :
       result=0;
       for(i=1;i<=n;i++)
                {
                    printf("Enter num : \t");
                    scanf("%f",&n1);
                    if(i==1)
                     result=n1-result;
                     else
                        result=result-n1;
                     continue;

                }
                 printf("Result is :%f\t",result);
                 break;


      case 3 :
           result=1;
        for(i=1;i<=n;i++)
                    {   printf("Enter num : \t");
                        scanf("%f",&n1);
                         result=n1*result;
                    }
            printf("Result is : %f\t",result);
            break;


      case 4 :
        result=1;
for(i=1;i<=n;i++)
                    {
                        printf("Enter num :\t");
                        scanf("%f",&n1);
                       if(i==1)
                        result=n1/result;
                        else
                            result=result/n1;

                    }

           printf("Result is : %f\t",result);
           break;


  case 5 :
    res=1;
for(i=1;i<=n;i++)
                    {
                        printf("Enter num :\t");
                        scanf("%d",&n2);
                       if(i==1)
                        res=n2;
                        else
                            res=res%n2;

                    }

           printf("Result is : %d\t",res);
           break;


       default : printf("invalid operation");
  }
          }
return 0;
}
