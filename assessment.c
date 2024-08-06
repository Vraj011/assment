#include<stdio.h>
main()
{
	while(1)
	{
		printf("\n***************Welcome*************\n");
		printf("\nPress 1 for Eqality");
		printf("\nPress 2 for String copy");
		printf("\nPress 3 for Concat");
		printf("\nPress 4 for Show");
		printf("\nPress 5 for Reverse");
//		printf("\nPress 6 for Palindrone");
		printf("\nPress 6 for Sub string");
		printf("\nPress 7 for Exit");
		
		int a;
		
		int choice;
		printf("\n enter chocie:");
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
	
	else if(choice==3)
	{
     char a[100], b[100], c[100];
    int i,j;

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
	
	else if(choice==4)
	{
		
		printf("\n Welcome to Show");
		printf("\n Please enter the string:");
		scanf("%d",&a);
		printf("\n%d",a);
	}
	
	//*****5*****
	
	else if(choice==5)
	{
		printf("\n  Reverse");
		
	    // Initialize
	    char a[10], i;
	
	    // Get Input from User
	    printf("Enter a String : ");
	    gets(a);
	
	    printf("Separate String in Reverse : ");
	
	    // Using strlen()
	    for (i = strlen (a-1; i >= 0; i--)
	    {
	        printf("%c", a[i]);
	    }
		
	}
	
	//*****6*****
	
	
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
	        printf("%c\n", a[i]); 
		
	}
	
	
	//*****7*****
	
	else if(choice==7)
	{
		printf("\n  Exit");
		break;
	}
	else{
		printf("\n Invalid choice");
		break;
	}
}
}

