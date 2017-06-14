#include <stdio.h>
#include <stdlib.h>
#define SQ(x) ((x)*(x))

/** sizeof(array) will give the total of: (arr.length * blocks taken by data type),
/*  the latter can be expressed as sizeof(data), for example, int/double/char, etc.
/*  to find the numElems in the array, divide sizeof(array) by the sizeof(elemInArray)

int main()
{
    int size;
    printf("Gimme a size: \n");
    scanf(" %d", &size);
    
    //dynamic allocation
    int *arr = malloc(sizeof(int)*size);
    printf("%d, ", sizeof(arr) / sizeof(arr[0])); //CAN'T FIND CORRECT SIZE OF DYNAM ALLOC ARRAY
    
    //array declaration
    int arr2[size];
    printf("%d \n", sizeof(arr2) / sizeof(arr2[0])); //CORRECT SIZE
    
   
    return 0;
}

