/* -----------------------------------------------------------------------------------*/
/* stra.c                                                                             */
/* Author: Ellen Su                                                                   */
/* netID: eysu                                                                        */
/* precept: P04A                                                                      */     
/* -----------------------------------------------------------------------------------*/
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
    size_t i;
    assert(pcSrc != NULL);
    length = Str_getLength(pcSrc);

    for (i = 0; i <= length; i++){
        dest[i] = pcSrc[i];
    }

    return dest;
}
/* -----------------------------------------------------------------------------------*/

char *Str_concat(char pcSrc1[], const char pcSrc2[]){
    size_t i;
    size_t length1;
    size_t length2;
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);

    length1 = Str_getLength(pcSrc1);
    length2 = Str_getLength(pcSrc2);

    for (i = 0; i <= length2; i++)
        pcSrc1[length1 + i] = pcSrc2[i];

    return pcSrc1;
}
/* -----------------------------------------------------------------------------------*/

int Str_compare(const char pcSrc1[], const char pcSrc2[]){
    size_t i;
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);

    for (i=0; (pcSrc1[i] == pcSrc2[i]); i++)
        if (pcSrc1[i] == '\0'){
            return 0;
        }
    return pcSrc1[i] - pcSrc2[i];
}
/* -----------------------------------------------------------------------------------*/

char *Str_search(const char pcSrc1[], const char pcSrc2[]){
    size_t i;
    size_t j;
    size_t length1;
    size_t length2;
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);

    length1 = Str_getLength(pcSrc1);
    length2 = Str_getLength(pcSrc2);

    for (i = 0; i < length1; i++){
        for (j = i; j < i + length2; j++){
            if (pcSrc1[j] != pcSrc2[j - i]){
                break;
            }
        }
        if (j == i + length2){
            return (char*)&pcSrc1[i];
        }
    }
    return NULL;
}
/* -----------------------------------------------------------------------------------*/