#include<stdio.h>
int main(){
   



int arrA[5]={1,2,3,4,5};
int arrB[5]={6,7,8,9,10};
int arrC[5];
int i;

int totalElements = sizeof(arrA) / sizeof(arrA[0]);

for(i=0; i<totalElements; i++)
{
    arrC[i]=(arrA[i] + arrB[i]);
}

printf("\n(");


return 0;
}