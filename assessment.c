#include<stdio.h>
main()
{
	while(1)
	{
		printf("\n***************Welcome*************\n"); // user chocie selection from 1to7
		printf("\nPress 1 for Eqality");
		printf("\nPress 2 for String copy");
		printf("\nPress 3 for Concat");
		printf("\nPress 4 for Show");
		printf("\nPress 5 for Reverse");
		printf("\nPress 6 for Sub string");
		printf("\nPress 7 for Exit");
		
		int a;
		
		int choice;
		printf("\n enter chocie:"); //choice selection
		scanf("%d",&choice);
		
		
		//*****1*****
		if(choice==1)
		{
		
		int n,fac=1,i;
		printf("\nEnter number;");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
		{
			fac*=i;
		}
		printf("\n%d",fac);
}
	
	//*****2*****
	// String copy
	else if(choice==2)
	{
		printf("\n Welcome to String copy");
			// Initialize
	    char a[10],b[10];
	
	    printf("Enter string : ");
	    gets(a);  // work like scanf();
	
	    // strcpy() is used to define copy one string to another
	    // a = Usre's String
	    // b = Copied String
	    strcpy(b,a);    
	    printf("String number 2 is : %s", b);  
		
	}
	
	//*****3*****
	//Concat
	else if(choice==3)
	{
     char a[100], b[100], c[100];
     int i,j;
	
	fflush(stdin);
    // get value from user
    printf("Enter the String : ");
	gets(a);
    printf("Enter the String : ");
	gets(b);
    // for loop i
    for(i=0 ; a[i]!='\0' ; i++){
     	c[i] = a[i];
	}
    // for loop j
    for(j=0 ; b[j]!='\0' ; j++){
     	c[i] = b[j];
     	i++;
	}
    c[i]='\0';
     
    // output
    printf("Combine String is : %s", c);

	}
	
	//*****4*****
	//Show
	else if(choice==4)
	{
		char a[100];
		printf("\n Welcome to Show");
		fflush(stdin);
		printf("\n Please enter the string:");
		gets(a);
		printf("\n%s",a);
	}
	
	//*****5*****
	//Reverse string
	else if(choice==5)
	{
		printf("\n  Reverse");
		
	    // Initialize
	    char a[10];
		int i,len;
	
		fflush(stdin);
	    // Get Input from User
	    printf("Enter a String : ");
	    gets(a);
	
	    printf("Separate String in Reverse : ");
	
	    // Using strlen()
	    len=strlen(a);
	    printf("%d",len);
	   for(i=len-1;i>0;i--)
	    {
	    	printf("\n%c",a[i]);
					}
		
	}
	
	//*****6*****
	//sub string
	
	else if(choice==6)
	{
		printf("\n  Sub string");
		// Initialize
	    char a[10], i;
	
	    // Get Input From User
	    printf("Enter a String : ");
	    gets(a);
	
		printf("Separate String\n");
	    for(i=0 ; a[i]!='\0' ; i++){
	        printf("%c\n", a[i]); }
		
	}
	
	
	//*****7*****
	//Exit
	else if(choice==7)
	{
		break;
	}
	else
	{
		printf("\n Invalid choice"); // invalid choice
		break;// end
	}
}
}

