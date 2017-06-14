#include <stdio.h>
int main()
{
	int a[]={10, 20, 30, 40, 50};
	int *ptr = a;
	//1. pointer to first of array, 2. address of pointer to first at array, 
	//3. address of first element of array, 4. declared pointer to first of array, 5. address of declared ptr to first of array	
	printf("\n%u | %u | %u | %u | %u\n",	a, &a, &a[0],ptr,&ptr); 
						
	//1. first elem, 2. value at pointer to first elem, 3. value at declared ptr TO firstelem, 4. firstelem of array ptr
	printf("%d | %d | %d | %d\n\n", a[0], *(a+1), *ptr, ptr[0]);
	
	return	0;
}
