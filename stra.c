/* -----------------------------------------------------------------------------------*/
/* stra.c                                                                             */
/* Author: Ellen Su                                                                   */
/* netID: eysu                                                                        */
/* precept: P04A                                                                      */     
/* -----------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>
#include "str.h"

size_t Str_getLength(const char pcSrc[]){
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
       uLength++;
   return uLength;
}
/* -----------------------------------------------------------------------------------*/

char *Str_copy(char dest[], const char pcSrc[]){
    size_t length;
    int i;
    assert(pcSrc != NULL);
    length = Str_getLength(pcSrc);

    for (i = 0; i <= length; i++){
        dest[i] = pcSrc[i];
    }

    return dest;
}
/* -----------------------------------------------------------------------------------*/

char *Str_concat(const char pcSrc1[], const char pcSrc2[]){
    int i;
    int length1;
    int length2;
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);

    length1 = Str_getLength(pcSrc1);

    for (i = 0; i <= length2; i++)
        pcSrc1[length + i] = pcSrc2[i];

    return pcSrc1;
}
/* -----------------------------------------------------------------------------------*/

int Str_compare(const char pcSrc1[], const char pcSrc2[]){
    int i;
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);

    while (i=0; pcSrc[i] == pcSrc2[i]; i++)
        if (pcSrc[i] == '\0'){
            return 0;
        }
    return s[i] - t[i];
}
/* -----------------------------------------------------------------------------------*/

/* size_t Str_search(const char pcSrc1[], const char pcSrc2[]){
//     assert(pcSrc1 != NULL);
//     assert(pcSrc2 != NULL);
//     size_t length1 = Str_getLength(pcSrc1);
//     size_t length2 = Str_getLength(pcSrc2);
//     size_t

//     for (i = 0; i < length2; i++){
        
//     }
*/ 
/* -----------------------------------------------------------------------------------*/

int main(void){
    return 0;
}