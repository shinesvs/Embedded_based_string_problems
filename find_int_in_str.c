#include <stdio.h>

int my_count_digits( const char * str ) 
{
int len = 0;
int count = 0;
while ( str[len] != '\0'){
    if ( (int)str[len] > 47 && (int)str[len] < 58 )
    count++;

    len++;
}
    return count ;
}


int main() {
    char data[] = "TEMP:27.5C";
    printf("Digits: %d\n", my_count_digits(data));  // Output: 3
    return 0;
}
