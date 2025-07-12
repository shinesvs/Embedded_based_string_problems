#include <stdio.h>
#include "string.h"
#include "string.c"

int main() {
  // String length
    char str_length[] = "hELLO wORLD";
    printf("The str length is: %d\n", str_len(str_length));
  
  // STRING Compare
    char str_length1[] = "hELLO wORLD";
    char str_length2[] = "hELLO wORL123D";
    if (string_compare( str_length1,str_length2))
    printf("Strings Match \n");
    else
    printf("Strings Do Not Match \n");
  
  // Check for integers in string
    char data[] = "TEMP:27.5C";
    printf("Digits: %d\n", my_count_digits(data));  // Output: 3
    
  // Remove spaces in a string
    char str[]= " Hello  W oRLD";
    char * str1 = remove_spaces ( str );
    printf("The modified string without spaces is: %s\n", str1);
    

    return 0;
    
}
