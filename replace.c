/*--------------------------------------------------------------------*/
/* replace.c                                                          */
/* Author: Ellen Su                                                   */
/* netID: eysu                                                        */
/* precept: P04A                                                      */
/* -------------------------------------------------------------------*/

#include "str.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

/*--------------------------------------------------------------------*/

/* If pcFrom is the empty string, then write string pcLine to stdout
   and return 0.  Otherwise write string pcLine to stdout with each
   distinct occurrence of string pcFrom replaced with string pcTo,
   and return a count of how many replacements were made.  Make no
   assumptions about the maximum number of replacements or the
   maximum number of characters in strings pcLine, pcFrom, or pcTo. */

static size_t replaceAndWrite(const char *pcLine,
                              const char *pcFrom, const char *pcTo)
{
   char *traverse_string;
   char *traverse_pcTo;
   char *replace;
   int count;
   int skip_len;
   assert(pcLine!= NULL);
   assert(pcFrom!= NULL);
   assert(pcTo!= NULL);
   
   count = 0;
   skip_len = (int)Str_getLength(pcFrom);
   traverse_string = (char*)pcLine;
   traverse_pcTo = (char*)pcTo;
   replace = Str_search(pcLine, pcFrom);

   /* check if line is empty string, if so, return line and count = 0. */
   if (*pcFrom == '\0'){
      printf("%s", pcLine);
      return (size_t)count;
   }

   /* While still MACROS to replace, print line up to pcFrom, then print
   pcTo. Increment traverse line pointer to start after the replaced
   characters, reset pcTo pointer, and search for next string to replace. */
   while (replace != NULL){
      while (traverse_string != replace){
         putchar(*traverse_string);
         traverse_string++;
      }
      count++;
      while (*traverse_pcTo != '\0'){
         putchar(*traverse_pcTo);
         traverse_pcTo++;
      }
      traverse_string += skip_len;
      traverse_pcTo = (char*)pcTo;
      replace = Str_search(traverse_string, pcFrom);
   }

   /* when no more strings to replace, print remainder of string and 
   return count of replacements. */
   while (*traverse_string != '\0') {
      putchar(*traverse_string);
      traverse_string++;
   }
   return (size_t)count;
}
   
/*--------------------------------------------------------------------*/

/* If argc is unequal to 3, then write an error message to stderr and
   return EXIT_FAILURE.  Otherwise...
   If argv[1] is the empty string, then write each line of stdin to
   stdout, write a message to stderr indicating that 0 replacements
   were made, and return 0.  Otherwise...
   Write each line of stdin to stdout with each distinct occurrence of
   argv[1] replaced with argv[2], write a message to stderr indicating
   how many replacements were made, and return 0.
   Assume that no line of stdin consists of more than MAX_LINE_SIZE-1
   characters. */

int main(int argc, char *argv[])
{
   enum {MAX_LINE_SIZE = 4096};
   enum {PROPER_ARG_COUNT = 3};

   char acLine[MAX_LINE_SIZE];
   char *pcFrom;
   char *pcTo;
   size_t uReplaceCount = 0;

   if (argc != PROPER_ARG_COUNT)
   {
      fprintf(stderr, "usage: %s fromstring tostring\n", argv[0]);
      return EXIT_FAILURE;
   }

   pcFrom = argv[1];
   pcTo = argv[2];

   while (fgets(acLine, MAX_LINE_SIZE, stdin) != NULL)
      uReplaceCount += replaceAndWrite(acLine, pcFrom, pcTo);
   fprintf(stderr, "%lu replacements\n", (unsigned long)uReplaceCount);
   return 0;
      
}
