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

char[] Str_copy(const char pcSrc[]){
    assert(pcSrc != NULL);
    size_t length = Str_getLength(pcSrc);
    char dest[length + 1];
    for (i = 0; i < length; i++){
        dest[i] = pcSrc[i];
    }
    dest[length] = '\0';  
    return dest;
}
/* -----------------------------------------------------------------------------------*/

char[] Str_concat(const char pcSrc1[], const char pcSrc2[]){
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);
    size_t length1 = Str_getLength(pcSrc1);
    size_t length2 = Str_getLength(pcSrc2);
    char dest[length1 + length2 + 1];

    for (i = 0; i < length1; i++){
        dest[i] = pcSrc1[i];
    }
    for (i = 0; i < length2; i++){
        dest[length1 + i] = pcSrc2[i];
    }
    dest[length1 + length2] = '\0';  
    return dest;
}
/* -----------------------------------------------------------------------------------*/

size_t Str_compare(const char pcSrc1[], const char pcSrc2[]){
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);
    size_t length1 = Str_getLength(pcSrc1);
    size_t length2 = Str_getLength(pcSrc2);
    int val1 = 0;
    int val2 = 0;

    for (i = 0; i < length1; i++){
        val1 += pcSrc1[i];
    }
    for (i = 0; i < length2; i++){
        val2 += pcSrc2[i];
    }
    return val1 - val2;
}
/* -----------------------------------------------------------------------------------*/

// size_t Str_search(const char pcSrc1[], const char pcSrc2[]){
//     assert(pcSrc1 != NULL);
//     assert(pcSrc2 != NULL);
//     size_t length1 = Str_getLength(pcSrc1);
//     size_t length2 = Str_getLength(pcSrc2);
//     size_t

//     for (i = 0; i < length2; i++){
        
//     }
// }
/* -----------------------------------------------------------------------------------*/

int main(void){
    return 0;
}