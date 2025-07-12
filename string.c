int str_len ( char * str )
{
int count = 0;
while ( *str != '\0' ){
  count++;
  *str++;
}
return count;  
}


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


char * remove_spaces( const char * str)
{
static char temp[25];  
    int x = 0;

    while (*str != '\0') {
        if (*str != ' ') {
            temp[x] = *str;
            x++;
        }
        str++;
    }
    temp[x] = '\0';  
    return temp;
}
  
  
int string_compare ( char * str1 , char * str2 )
 {
  int x = 0;
   if ( str_len(str1) != str_len(str2))
   return 0;
     while ( *str1 != '\0' ){
       if ( *str1 != *str2){
         return 0;
       }
         *str1++;
         *str2++;
      }
  return 1;
 }
