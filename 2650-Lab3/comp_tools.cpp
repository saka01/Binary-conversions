#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 8

void func_1s_comp(int a[], int resultType){
 int result[MAX];

    for(int i=0; i < MAX; i = i + 1){
        result[i] = !a[i];
 }
 if(resultType == 1){
      for(int i=0; i < MAX; i = i + 1){
          printf("%d", result[i]);
        }

    }else if(resultType == 2){

   int hmm = array_to_num(result,MAX);
        int oct = toOctal(hmm);
         printf("This is the result in Octal: %d\n", oct);
   }else if(resultType == 3){

    int hml = array_to_num(result,MAX);
         int dec = toDecimal(hml);
          printf("This is the result in Decimal: %d\n", dec);
    }else if(resultType == 4){

      int hmc = array_to_num(result,MAX);

          long int hexa = toHexadecimal(hmc);
   //
   //        lowerhexa = tolower(hexa);

            printf("This is the result in hexadecimal: %lx\n", hexa);

      }else if(resultType == 5){

          long int hmd = array_to_num(result,MAX);
              long int HEXA = toHexadecimal(hmd);
                printf("This is the result in hexadecimal: %lX\n", HEXA);
          }
}

void func_2s_comp(int a[], int resultType){
 int result[MAX];

    for(int i=0; i < MAX; i = i + 1){
        result[i] = !a[i];
 }

  if(resultType == 1){
       for(int i=0; i < MAX; i = i + 1){
           printf("%d", result[i]);
         }

     }else if(resultType == 2){

    int hmm = array_to_num(result,MAX);
         int oct = toOctal(hmm);
          printf("This is the result in Octal: %d\n", oct);
    }else if(resultType == 3){

     int hml = array_to_num(result,MAX);
          int dec = toDecimal(hml);
           printf("This is the result in Decimal: %d\n", dec);
     }else if(resultType == 4){

       int hmc = array_to_num(result,MAX);

           long int hexa = toHexadecimal(hmc);
    //
    //        lowerhexa = tolower(hexa);

             printf("This is the result in hexadecimal: %lx\n", hexa);

       }else if(resultType == 5){

           long int hmd = array_to_num(result,MAX);
               long int HEXA = toHexadecimal(hmd);
                 printf("This is the result in hexadecimal: %lX\n", HEXA);
           }
}

void func_2s_comp_star(int a[], int resultType){
 int result[MAX];

  int flag = 0;

    for(int i=6; i > 0; i = i - 1){
        if (a[i] != 1){
          result[i] = a[i];


        }else if (a[i] == 1) {
          flag = 1;
          result[i] = !(a[i]);
        }{

        }
 }

  if(resultType == 1){
       for(int i=0; i < MAX; i = i + 1){
           printf("%d", result[i]);
         }

     }else if(resultType == 2){

    int hmm = array_to_num(result,MAX);
         int oct = toOctal(hmm);
          printf("This is the result in Octal: %d\n", oct);
    }else if(resultType == 3){

     int hml = array_to_num(result,MAX);
          int dec = toDecimal(hml);
           printf("This is the result in Decimal: %d\n", dec);
     }else if(resultType == 4){

       int hmc = array_to_num(result,MAX);

           long int hexa = toHexadecimal(hmc);
    //
    //        lowerhexa = tolower(hexa);

             printf("This is the result in hexadecimal: %lx\n", hexa);

       }else if(resultType == 5){

           long int hmd = array_to_num(result,MAX);
               long int HEXA = toHexadecimal(hmd);
                 printf("This is the result in hexadecimal: %lX\n", HEXA);
           }
}
