//
//  main.c
//  More Function
//  No argument and No return value
//
//  Created by Eun Jae Lee on 22/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  function with argument and return value: int add(int,int);
//  function with no argumemt amd no return value: void add();

//  function with argument and no return value: void add(int,int);
//  function with no argumemt amd return value: int add();

#include <stdio.h>

void add(void); // function declaration


int main() {

    add(); // function calling
    getchar();
}

void add() { // function definition
    
    int a,b,sum;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    
    sum = a+b;
    printf("Sum is %d \n", sum);
    
}
