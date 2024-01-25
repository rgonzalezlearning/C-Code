#include<stdio.h>
#define MAX_ROW 100
#define MAX_COLUMN 10

void print_matrix(void);

int main()
{
    print_matrix();

    return 0;
}

void print_matrix(){
    int i = 0;      //initializes iterator column
    int j = 0;      //initializes iterator row
    int a = 0;
    
    for(i = 0; i < MAX_ROW; i++)
    {
        for(j = 0; j < MAX_COLUMN; j++){
            printf("%4d", a++);
        }
        printf("\n");
    }
}