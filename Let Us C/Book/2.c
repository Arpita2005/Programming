#include "stdio.h" 
main( ) 
{ 
 FILE *fp ; 
 fp = fopen ( "PR1.C", "r" ) ; 
 if ( fp == NULL ) 
 { 
 puts ( "cannot open file" ) ; 
 exit( ) ; 
 } 
}