/* -----------------------------------------------------------------------------------*/
/* stra.c                                                                             */
/* Author: Ellen Su                                                                   */
/* netID: eysu                                                                        */
/* precept: P04A                                                                      */
/* -----------------------------------------------------------------------------------*/
#include "str.h"

size_t Str_getLength(const char *pcSrc){
   const char *pcEnd;
   assert(pcSrc != NULL);
   pcEnd = pcSrc;
   while (*pcEnd != '\0')
      pcEnd++;
   return (size_t)(pcEnd - pcSrc);
}
/* -----------------------------------------------------------------------------------*/

char *Str_copy(char *dest, char *pcSrc){
    char *p = dest;
    assert(pcSrc != NULL);
    while (*p++ = *pcSrc++)
        ;
    return dest;
}
/* -----------------------------------------------------------------------------------*/

char *Str_concat(char *pcSrc1, char *pcSrc2){
    char *p = pcSrc1;
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);

    while (*p)
        p++;
    while (*p++ = *pcSrc2++)
        ;
    return pcSrc1;
}
/* -----------------------------------------------------------------------------------*/

int Str_compare(char *pcSrc1, char *pcSrc2){
    char *p1 = pcSrc1;
    char *p2 = pcSrc2;
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);

    while (*p1++ == *p2++)
        if (*p1 = '\0'){
            return 0;
        }
    return *p1 - *p2;
}
/* -----------------------------------------------------------------------------------*/

char *Str_search(char *pcSrc1, char *pcSrc2){
    char *p1 = pcSrc1;
    char *p2 = pcSrc2;
    char *psubstring;
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);
    while (*p1)
        if (*p1 != *p2) {continue;}
        else {
            *psubstring = &p1;
            while (*p1++ == *p2++)
                if (*p2++ == '\0'){
                    return psubstring;
                }
        }
    return NULL;

}
/* -----------------------------------------------------------------------------------*/

int main(void){
    return 0;
}


