/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float outp( int, float, float, float );
float inp( float, float );

int main( void )
{
 int choice;
 
 printf( "Hospital Charges.\n" );
 printf( "Enter 1 for in-patient or 2 an out-patient\n" );
 printf( "***********************\n" );
 printf( "1 : In-patient\n" );
 printf( "2 : Out-patient\n" );
 printf( "--> " );
 scanf( "%d", &choice );

 if(choice == 1)
 {
 int stmHospital;
 float dailyRate, daySpent, hospitalServices, medicationCharges, totalCharges = 0.0;
 totalCharges = outp(daySpent, dailyRate, hospitalServices, medicationCharges);
 printf( "\nTotal charges during hospital stay %.2f", hospitalServices );
 return 0;
 }
 if(choice == 2)
 {
 int stmHospital;
 float dailyRate, daySpent, medicationCharges, hospitalServices = 0.0;
 hospitalServices = inp( medicationCharges, hospitalServices );
 printf( "\nLab fees and services %.2f", hospitalServices );
 return 0;
 }
}


float outp( int a, float b, float c, float d )
{ 
 float x = 0.0;
 

 printf( "\n****In-patient****\n" );
 
 printf( "Number of days you spent in the hospital: " );
 scanf( "%d", &a ); 
 printf("******************************************\n");
 
 printf( "The daily rate: " );
 scanf( "%f", &b ); 
 printf("******************************************\n");
 
 printf( "Provided Services cost: " );
 scanf( "%f", &c );
 printf("******************************************\n");
 
 printf( "Supplied medication cost: " );
 scanf( "%f", &d ); 
 printf("******************************************\n");
 
 x = (a * b) + c + d;
 
 return x;
}

float inp( float a, float b )
{
 float x = 0.0;
 
 printf( "Provided Services cost: " );
 scanf( "%f", &a ); 
 printf("******************************************\n");
 
 printf( "Supplied medication cost: " );
 scanf( "%f", &b ); 
 printf("******************************************\n");
 
 x = a + b;
 
 return x;
}

