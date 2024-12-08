#include <stdio.h>

int main() {
   char name[50];
   int age;

  
  printf("Enter your name: ");
  scanf("%49s", name);

 
 printf("enter your age: ");
 scanf("%d", &age);

 
 printf("Hello, %s! you are %d years old.\n", name, age);

 return 0; 
}
