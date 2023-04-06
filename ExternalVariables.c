#include <stdio.h>
#include <string.h>

int testfunction(int x);

int main() {
  char word[] = "hello world";
  int number;
  printf("%s \n", word); 
  printf("please enter a number: ");
  scanf("%d", &number);
  number = testfunction(number);
  printf("%d	a \n", number);
  printf("%d      a \n", number);
  
  return 0;
}

int testfunction(int x) {
  int mynumber = x;
  return mynumber + 5;
}
