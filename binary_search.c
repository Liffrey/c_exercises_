#include <stdio.h>
#include <math.h>

int *random_array_generator(int *array)
{
    //int size_of_array = sizeof(array); 
    //for(int i=0;i<size_of_array;i++)
    for(int i=0;i<20;i++)
    {
        array[i] = rand()%100;
    }
    return array;
}

int main(void)
{
    int i=0;
    int array[20];
    int* ptr = random_array_generator(array);
    //int size = sizeof(array); 
    printf("\nList of numbers:");
    //for(i=0;i<size;i++)
    for(i=0;i<20;i++)
    {
        printf("%d"",",ptr[i]);
    }

    while ();

    return 0;
}