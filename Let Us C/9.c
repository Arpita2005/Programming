#include "stdio.h" 
main( ) 
{ 
 FILE *fs, *ft ; 
 int ch ; 
 fs = fopen ( "pr1.exe", "rb" ) ; 
 if ( fs == NULL ) 
 { 
 puts ( "Cannot open source file" ) ; 
 exit( ) ; 
 } 
 ft = fopen ( "newpr1.exe", "wb" ) ; 
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