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
    char *p1;
    char *p2;
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);
    p1 = (char*)pcSrc1;
    p2 = (char*)pcSrc2;

    if (*p1 == '\0'){
        return -*p2;
    }
    while (*p1 == *p2)
        if (*p1 == '\0'){
            return 0;
        }
        p1++;
        p2++;
    return *p1 - *p2;
}
/* -----------------------------------------------------------------------------------*/

char *Str_search(const char *pcSrc1, const char *pcSrc2){
    char *p1 = (char*)pcSrc1;
    char *p2 = (char*)pcSrc2;
    char *psubstring;
    assert(pcSrc1 != NULL);
    assert(pcSrc2 != NULL);
    while (*p1)
        if (*p1 != *p2) {continue;}
        else {
            psubstring = p1;
            while (*p1++ == *p2++)
                if (*p2++ == '\0'){
                    return (char*)psubstring;
                }
        }
    return NULL;

}
/* -----------------------------------------------------------------------------------*/