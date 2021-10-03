/* -----------------------------------------------------------------------------------*/
/* stra.c                                                                             */
/* Author: Ellen Su                                                                   */
/* netID: eysu                                                                        */
/* precept: P04A                                                                      */
/*                                                                                    */
/* Description: Implement program that mimics the String module               .       */
/* -----------------------------------------------------------------------------------*/

#ifndef STR_INCLUDED
#define STR_INCLUDED

/* -----------------------------------------------------------------------------------*/
/* Take in a string and return its length. */

size_t Str_getLength(const char pcSrc[]);

/* -----------------------------------------------------------------------------------*/

/* Take in a string and return a copy of the string. */

char *Str_copy(char dest[], const char pcSrc[]);

/* -----------------------------------------------------------------------------------*/

/* Take in two strings and concatenate them into one string. */

char *Str_concat(char pcSrc1[], const char pcSrc2[]);

/* -----------------------------------------------------------------------------------*/

/* Take in two strings and compare their values. Return a value less than, equal to, or 
greater than 0 depending if string1 is less than, equal to, or greater than string2. */

int Str_compare(const char pcSrc1[], const char pcSrc2[]); 

/* -----------------------------------------------------------------------------------*/

/* Take in two strings and return the first occurence of string2 that appears as a 
substring in string1. Returns null if no match is found.  */
char *Str_search(char pcSrc1[], const char pcSrc2[]);

/* -----------------------------------------------------------------------------------*/

#endif