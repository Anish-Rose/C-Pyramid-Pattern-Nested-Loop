#include <stdio.h>

int main(){

  //Building a Pyramid Pattern In Nested For Loop.

  int row,i,j,k;

  printf("Enter Number Of Row : ");
  scanf("%d" , &row);

  for(i=row ; i >= 1 ; i--){
    //space
    for(j=i ; j>= 2 ; j--){
        printf(" ");
    }
    for(k=1; k<= 2*(row-i+1)-1; k++){
        printf("*");
    }
    printf("\n");
  }


getch();
  return 0;



}
