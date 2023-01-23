#include "stdio.h" 
main( ) 
{ 
 FILE *fs, *ft ; 
 char ch ; 
 fs = fopen ( "pr1.c", "r" ) ; 
 if ( fs == NULL ) 
 { 
 puts ( "Cannot open source file" ) ; 
 exit( ) ; 
 } 
 ft = fopen ( "pr2.c", "w" ) ; 
 if ( ft == NULL ) 
 { 
 puts ( "Cannot open target file" ) ; 
 fclose ( fs ) ; 
 exit( ) ; 
 } 
 while ( 1 ) 
 { 
 ch = fgetc ( fs ) ; 
 if ( ch == EOF ) 
 break ; 
 else 
 fputc ( ch, ft ) ; 
 } 
 fclose ( fs ) ; 
 fclose ( ft ) ; 
}