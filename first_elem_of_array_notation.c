#include <stdio.h>
#define MAX_COLS 5
#define MAX_ROWS 5

int main()
{
    
    int arr[MAX_ROWS][MAX_COLS] = {{0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}, {10, 11, 12, 13, 14}, {15, 16, 17, 18, 19}, {20, 21, 22, 23, 24}};
    
    int i = 0;
    int j = 3;
    
    //4 different notations
    int *p = &arr[0][0] +MAX_COLS*i + j; //p and p2 are same [i][j]
    int *p2 = arr[0] + MAX_COLS*i + j;
    int *p3 = arr + MAX_COLS*i + j; //p3 and p4 are same, diff from others. has only one [](space) accesses array[1] rather than array[0][1]
    int *p4 = &arr[0] + MAX_COLS*i + j;
    
    int *b = &arr[0][0];
    int *b1 = arr[0];
    int *b2 = arr;
    int *b3 = &arr[0];
    printf("%d", arr[10]);
    printf("\n(base address): %d, %u | %d, %u | %d, %u | %d, %u\n", *b, b, *b1, b1, *b2, b2, *b3, b3);
    printf("(arr[i][j] form): arr[%d][%d] =  %d\n", i, j, arr[i][j]);
    printf("(manual block access): %d | %d | %d | %d\n", *p, *p2, *p3, *p4);
    printf("(addresses): %u | %u | %u | %u\n", p, p2, p3, p4);
    
    
    
    
}

