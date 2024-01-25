#include<stdio.h>
#define MAX_ROW 100
#define MAX_COLUMN 100


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
    
    for(i = 0; i < MAX_COLUMN; i++)
    {
        for(j = 0; j < MAX_ROW; j++){
            printf("%2d", a++);
        }
    }
}