#include <stdio.h>

#define MAX_SIZE 100
int main()
{
     int arr[MAX_SIZE];
    int size, i, toSearch, found;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);
    found = 0; 
    
    for(i=0; i<size; i++)
    {
        if(arr[i] == toSearch)
   }
}

}
