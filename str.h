/* -----------------------------------------------------------------------------------*/
/* stra.c                                                                             */
/* Author: Ellen Su                                                                   */
/* netID: eysu                                                                        */
/* precept: P04A                                                                      */
/*                                                                                    */
/* Description: Implement program that mimics the String module               .       */
/* -----------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

#ifndef STR_INCLUDED
#define STR_INCLUDED

/* -----------------------------------------------------------------------------------*/
/* Take in a string pcSrc and return its length. */

size_t Str_getLength(const char pcSrc[]);

/* -----------------------------------------------------------------------------------*/

/* Take in a string pcSrc and return a copy of the pcSrc as string dest. */

char *Str_copy(char dest[], const char pcSrc[]);

/* -----------------------------------------------------------------------------------*/

/* Take in two strings pcSrc1 and pcSrc2 and concatenate them into one string stored 
in pcSrc1. Return pcSrc1. */

char *Str_concat(char pcSrc1[], const char pcSrc2[]);

/* -----------------------------------------------------------------------------------*/

/* Take in two strings pcSrc1 and pcSrc2 and compare their values. Return a value less 
than, equal to, or greater than 0 depending if pcSrc2 is less than, equal to, or greater 
than pcSrc2. */

int Str_compare(const char pcSrc1[], const char pcSrc2[]); 

/* -----------------------------------------------------------------------------------*/

/* Take in two strings pcSrc1 and pcSrc2 and return the first occurrence of pcSrc2 that 
appears as a substring in pcSrc1. Returns null if no match is found.  */
char *Str_search(const char pcSrc1[], const char pcSrc2[]);

/* -----------------------------------------------------------------------------------*/

#endif