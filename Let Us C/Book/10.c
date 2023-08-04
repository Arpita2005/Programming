/* Receives records from keyboard and writes them to a file in binary mode */ 
#include "stdio.h" 
main( ) 
{ 
 FILE *fp ; 
 char another = 'Y' ; 
 struct emp 
 { 
 char name[40] ; 
 int age ; 
 float bs ; 
 } ; 
 struct emp e ; 
 
 fp = fopen ( "EMP.DAT", "wb" ) ; 
 if ( fp == NULL ) 
 { 
 puts ( "Cannot open file" ) ; 
 exit( ) ; 
 } 
 while ( another == 'Y' ) 
 { 
 printf ( "\nEnter name, age and basic salary: " ) ; 
 scanf ( "%s %d %f", e.name, &e.age, &e.bs ) ; 
 fwrite ( &e, sizeof ( e ), 1, fp ) ; 
 printf ( "Add another record (Y/N) " ) ; 

 fflush ( stdin ) ; 
 another = getche( ) ; 
 } 
 fclose ( fp ) ; 
} 