#include <stdio.h>

#define ARRAY_SIZE 5

int main() {
   //int numbers[ARRAY_SIZE]={0};
   //int number_count = 0;
   char string[] = "hello";

    //numbers[number_count++] = 10;
    //numbers[number_count++] = 20;
   
   for(int index = 0; index < 6; index++){
    char current_char = string[index];
    /*if (current_char>=)
    {
    
    }*/
    
    printf("string[%d] = (%c) = %d\n", index, string[index], current_char);
    }

   
   return 0;
}
