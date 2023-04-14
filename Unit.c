#include <stdio.h>
#include <conio.h>
void temperature ()
{
    int choice,f,c;
    float fc,cf;
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&choice);
      switch(choice)
       {    case 1:
           {
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&f);
          fc =  ((f-32) * (5.0/9.0));
	  printf("Celcius: %.2f",fc);
	  break;
      }
      case 2:
      {
	printf("Please enter the Celcius degree: \n");
	scanf("%d",&c);
	cf = ((9.0/5.0)*c + 32);
	printf("Fahrenheit: %.2f",cf);
	break;
      }
      default:
	printf("Please enter the correct choice. \n");
	}
       getch();
}
 void currency()
 {
     int choice,inputUSDtoEuro,inputUSDtoINR,inputUSDtoRMB;
      float USDtoEURO,USDtoINR,USDtoRMB;
      printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for USD to Euro. \n");
      printf("Enter 2 for USD to INR. \n");
      printf("Enter 3 for USD to RMB. \n");
      scanf("%d",&choice);
      switch (choice)
      {
          case 1:
          {printf("Please enter the USD amount: \n");
          scanf("%d",&inputUSDtoEuro);
	  USDtoEURO = inputUSDtoEuro * 0.98;
	  printf("Euro: %.2f",USDtoEURO);
	  break;
      }
      case 2:
      {
	  printf("Please enter the USD amount: \n");
	  scanf("%d",&inputUSDtoINR);
	  USDtoINR = inputUSDtoINR * 79.37;
	  printf("INR: %.2f",USDtoINR);
	  break;
      }
     case 3: {
printf("Please enter the USD amount: \n");
        scanf("%d",&inputUSDtoRMB);
	USDtoRMB =inputUSDtoRMB * 6.76;
	printf("RMB: %.2f",USDtoRMB);
	break;
	}
        default:
	printf("Please enter the correct choice. \n");
      }
      getch();
     
 }
 void mass()
 {
     int choice,ounce,gram;
     float ounceToPounds,gramsToPounds;
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:
          {
          printf("Please enter the ounce amount: \n");
          scanf("%d",&ounce);
          ounceToPounds = ounce * 0.0625;
          printf("Pounds: %f",ounceToPounds);
          break;
      }
      case 2:
      {
          printf("Please enter the gram amount: \n");
          scanf("%d",&gram);
          gramsToPounds = gram * 0.00220462;
	  printf("Pounds: %f",gramsToPounds);
	  break;
      }
      default:
	printf("Please enter the correct choice. \n");
	}
	getch();
 }
void main() 
{
  char category;
  printf("\t \t \t Welcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T) \n Currency(C)\nMass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);
  
  switch(category)
  {
      case 'T':
      case 't':
      temperature();
      break;
     
      case 'C':
      case 'c':
      currency();
      break;
      
      case 'M':
      case 'm':
      mass();
      break;
    
      default:
      printf("Invalid choice");

      getch();
  }
}