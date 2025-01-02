#include <stdio.h>
#include ".semantic.h"

void handleAddition(){
   printf("Semantic Analysis: Addition detected.\n");
}

void handleSubtraction(){
   printf("Semantic Analysis: Subtraction detected.\n");
}

void handleMultiplication(){
   printf("Semantic Analysis: Multiplication detected.\n");
}

void handleDivision(){
   printf("Semantic Analysis: Division detected.\n");
}

void handleNumber(int num){
   printf("Semantic Analysis: Number %d detected.\n", num);
}

void handleIdentifier(const char *id){
   printf("Semantic Analysis: Identifier %s detected.\n", id);
}

void performSemanticAnalysis(){
   printf("Performing Semantic Analysis...\n");
}
