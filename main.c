#include <stdio.h>
#include "y.tab.c"
void parse(FILE *file);

void main(){
    FILE *file = fopen("input.txt", "r");
    parse(file);
}