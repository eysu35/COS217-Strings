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
    char *p; 
    assert(dest != NULL);
    assert(pcSrc != NULL);
    p = dest;
    while (*pcSrc != '\0')
        *(p++) = *(pcSrc++);
    *p = '\0';
    return dest;
}
/* -----------------------------------------------------------------------------------*/

char *Str_concat(char *pcSrc1, const char *pcSrc2){
    char *p1;
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);
    p1 = (char*)pcSrc1;

    while (*p1 != '\0')
        p1++;
    while (*pcSrc2 != '\0')
        *(p1++) = *(pcSrc2++);
    *p1 = '\0';
    return pcSrc1;
}
/* -----------------------------------------------------------------------------------*/

int Str_compare(const char *pcSrc1, const char *pcSrc2){
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);

    while (*pcSrc1 != '\0')
        if (*pcSrc2 == '\0'){
            return *pcSrc1;
        }
        else if (*pcSrc1 == *pcSrc2){
            pcSrc1++;
            pcSrc2++;
        }
        else{
            return *pcSrc1 - *pcSrc2;
        }
    if (*pcSrc1 == '\0'){
        return -*pcSrc2;
    }
    return 0;
}
/* -----------------------------------------------------------------------------------*/

char *Str_search(const char *pcSrc1, const char *pcSrc2){
    char *p;
    char *psubstring;
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);

    if (*pcSrc2 == '\0') {
        return (char*)pcSrc1;
    }
    p = (char*)pcSrc2;
    while (*pcSrc1 != '\0')
        if (*pcSrc1 != *p) {
            pcSrc1++;
        }
        else {
            psubstring = (char*)pcSrc1;
            while (*pcSrc1 == *p)
                if (*p == '\0'){
                    return (char*)psubstring;
                }
                pcSrc1++;
                p++;
        }
        p = (char*)pcSrc2;
    return NULL;

}
/* -----------------------------------------------------------------------------------*/