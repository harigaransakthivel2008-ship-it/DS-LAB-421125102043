#include <stdio.h>  
// Function for linear search  
int linearSearch(int arr[], int n, int key) { 
     for (int i = 0; i < n; ++i) { 
         if (arr[i] == key) { 
             return i;  
// Return the index if element is found 
         } 
     } 
// Return -1 if element is not found  
     return -1; 
}  
 
int main() { 
     int arr[] = {12, 45, 67, 23, 56, 89, 9, 43}; 
     int n = sizeof(arr) / sizeof(arr[0]); 
     int key, index; 
     printf("\n-Linear Search--\n"); 
      printf("Enter the element to search: "); 
      scanf("%d", &key); 
      index = linearSearch(arr, n, key); 
      if (index != -1) { 
        printf("Element %d found at position %d.\n", key, index + 1); 
      }  
     else { 
       printf("Element %d not found in the array.\n", key);  
     } 
      return 0; 
}
