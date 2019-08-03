/*NMT_stdlib.h:    Header for library of standard functions for 
 *                 NM Technologies

__author__      = "Nitin Mohan
__copyright__   = "Copy Right 2019. NM Technologies" */

#ifndef _NMT_stdlib_
#define _NMT_stdlib_

//------------------Structs & Enums----------------//
typedef enum {OK, NOK} NMT_result;                              //Standard return of function

//--------------Global Definitions----------------//
extern const char *result_enum2str[] = {"OK","NOK"};            //Convert NMT_result to string

//------------------Prototypes----------------------//
extern void       NMT_stdlib_split(char *string,                //In  - String to Split
                                   char *param,                 //In  - deliminator(s)
                                   char ***item_array,          //Out - Array of split strings
                                   int *no_of_items);           //Out - Number of elements in array

extern int        NMT_stdlib_count(char *string,                //In  - String to count
                                   char *param);                //In  - deliminator(s) to look for
                                                                //Out - # of occurences of param

extern size_t     NMT_stdlib_get_file_size(char *filepath);     //In  - Path to file
                                                                //Out - Size of file

extern NMT_result NMT_stdlib_read_file(char *filepath,          //In  - Path to file
                                       char **file_content);    //Out - Content of file

extern void NMT_stdlib_write_file(char *filepath,               //In  - Path to file
                                  char *file_content);          //In - Content to write
#endif