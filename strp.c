/* -----------------------------------------------------------------------------------*/
/* strp.c                                                                             */
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

char *Str_copy(char *dest, const char *pcSrc){
    char *copy;
    assert(dest != NULL);
    assert(pcSrc != NULL);

    copy = dest;

    while (*pcSrc != '\0')
        *(copy++) = *(pcSrc++);
    *copy = '\0';
    return dest;
}
/* -----------------------------------------------------------------------------------*/

char *Str_concat(char *pcSrc1, const char *pcSrc2){
    char *copy;
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);
    copy = pcSrc1;

    while (*copy != '\0')
        copy++;
    while (*pcSrc2 != '\0')
        *(copy++) = *(pcSrc2++);
    *copy = '\0';
    return pcSrc1;
}
/* -----------------------------------------------------------------------------------*/

int Str_compare(const char *pcSrc1, const char *pcSrc2){
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);

    while (*pcSrc1 != '\0')
        if (*pcSrc2 == '\0'){
            return (int)*pcSrc1;
        }
        else if (*pcSrc1 == *pcSrc2){
            pcSrc1++;
            pcSrc2++;
        }
        else{
            return (int)(*pcSrc1 - *pcSrc2);
        }
    if (*pcSrc1 == '\0'){
        return (int)-*pcSrc2;
    }
    return 0;
}
/* -----------------------------------------------------------------------------------*/

char *Str_search(const char *pcSrc1, const char *pcSrc2){
    char *needle;
    char *psubstring;
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);

    if (*pcSrc2 == '\0') {
        return (char*)pcSrc1;
    }
    needle = (char*)pcSrc2;

    
    while (*pcSrc1 != '\0'){
        if (*pcSrc1 != *needle) {
            pcSrc1++;
        }
        else {
            /* keep track of start of matching chars */
            /* increment pointers to haystack and needle i match */
            psubstring = (char*)pcSrc1;
            while (*pcSrc1 == *needle){
                pcSrc1++;
                needle++;
                if (*pcSrc1 == '\0' && *needle == '\0'){
                    return (char*)psubstring;
                }
            }
            
            if (*needle == '\0'){
                /* if reached end of needle but not haystack, return */
                return (char*)psubstring;
            }
            pcSrc1 = psubstring + 1;
            needle = (char*)pcSrc2;
        }
    }

    return NULL;

}
/* -----------------------------------------------------------------------------------*/