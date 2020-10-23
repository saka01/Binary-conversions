#include<stdio.h>
#include"logic_tools.h"
#include"comp_tools.h"
// #include"convert_tools.h"
#define MAX 8


int main() {

  int x[MAX],y[MAX],z[MAX],choice,baseChoice;

while (choice != 0) {

    printf("Enter the command: \n");
    printf("0) EXIT\n");
    printf("1) AND\n");
    printf("2) OR\n");
    printf("3) NOT\n");
    printf("4) 1's Complement\n");
    printf("5) 2's Complement\n");
    printf("6) 2's Complement*\n");
    scanf("%d", &choice);

  switch(choice){
    case 0:
    printf("BYEEEEEEEE.......\n");
    break;

	case 1:

  printf("Enter the first binary value: \n");
    for(int i=0; i < MAX; i = i + 1){
      scanf("%d", &x[i]);
  }

  printf("Enter the second binary value: \n");
    for(int i=0; i < MAX; i = i + 1){
      scanf("%d", &y[i]);
  }

  printf("What base do you want the answer to be converted to? \n");
  printf("1) Binary\n");
  printf("2) Octal\n");
  printf("3) Decimal\n");
  printf("4) hexadecimal\n");
  printf("5) HEXAdecimal\n");
  scanf("%d", &baseChoice);

  func_and(x,y,baseChoice);

  break;


	case 2:

    printf("Enter the first binary value: \n");

      for(int i=0; i < MAX; i = i + 1){
        scanf("%d", &x[i]);

          if ( x[i] == 1 || x[i] == 0 ){

        }else{
          printf("please enter a value that is either 0 or 1:\n");
          scanf("%d", &x[i]);
        }
          }


    printf("Enter the second binary value: \n");
      for(int i=0; i < MAX; i = i + 1){
        scanf("%d", &y[i]);
        if ( x[i] == 1 || x[i] == 0 ){

                }else{
                  printf("please enter a value that is either 0 or 1:\n");
                  scanf("%d", &x[i]);
                }
  }


  printf("What base do you want the answer to be converted to? \n");
  printf("1) Binary\n");
  printf("2) Octal\n");
  printf("3) Decimal\n");
  printf("4) hexadecimal\n");
  printf("5) HEXAdecimal\n");
  scanf("%d", &baseChoice);

    func_or(x,y,baseChoice);



  break;

  case 3:

  printf("Enter a binary value: \n");
    for(int i=0; i < MAX; i = i + 1){
      scanf("%d", &x[i]);
      if ( x[i] == 1 || x[i] == 0 ){

              }else{
                printf("please enter a value that is either 0 or 1:\n");
                scanf("%d", &x[i]);
              }
    }



  printf("What base do you want the answer to be converted to? \n");
  printf("1) Binary\n");
  printf("2) Octal\n");
  printf("3) Decimal\n");
  printf("4) hexadecimal\n");
  printf("5) HEXAdecimal\n");
  scanf("%d", &baseChoice);

    func_not(x,baseChoice);



     break;

    case 4:
    printf("Enter a binary value: \n");
      for(int i=0; i < MAX; i = i + 1){
        scanf("%d", &x[i]);
        if ( x[i] == 1 || x[i] == 0 ){

                }else{
                  printf("please enter a value that is either 0 or 1:\n");
                  scanf("%d", &x[i]);
                }
      }

  printf("What base do you want the answer to be converted to? \n");
  printf("1) Binary\n");
  printf("2) Octal\n");
  printf("3) Decimal\n");
  printf("4) hexadecimal\n");
  printf("5) HEXAdecimal\n");
  scanf("%d", &baseChoice);

      func_1s_comp(x,baseChoice);


     break;

  case 5:
  printf("Enter a binary value: \n");
    for(int i=0; i < 6; i = i + 1){
      scanf("%d", &x[i]);
      if ( x[i] == 1 || x[i] == 0 ){

              }else{
                printf("please enter a value that is either 0 or 1:\n");
                scanf("%d", &x[i]);
              }
    }

  printf("What base do you want the answer to be converted to? \n");
  printf("1) Binary\n");
  printf("2) Octal\n");
  printf("3) Decimal\n");
  printf("4) hexadecimal\n");
  printf("5) HEXAdecimal\n");
  scanf("%d", &baseChoice);

    func_2s_comp_star(x,baseChoice);


   break;

     case 6:
     printf("byeeeeeeeeee\n");
     break;

  default:
    printf("ERROR! Choice is not correct, Choose again.\n");
    break;



  }
 }

  return 0;

}




