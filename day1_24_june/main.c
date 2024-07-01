// Complete this assignment 1:
/*
// Linear Search
// List arr = {23, 56, 67, 78};
// Repeat searching one by one until search element is found
for( i = 0; i < n ; i++) // This will repeat the code inside block n times
{
    // to access element you do arr[0] = first element
    // to access ith element you do arr[i]
    complete the code and return the position of the found element else return -1
    Write pseudocode, algorithm or C code is also fine.
    .....
}

PROCEDURE linearSearch(arr, n, target)
 FOR i = 0 TO n-1
    IF arr[i] == target
      RETURN i  // element found, return position
  RETURN -1  // element not found
END PROCEDURE

int linearSearch(int arr[], int n, int target) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
      return i;  // element found, return position
    }
  }
  return -1;  // element not found
}

*/

// #include <stdio.h>

// int linearSearch(int arr[], int n, int target)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i; // element found, return position
//         }
//     }
//     return -1; // element not found
// }

// int main()
// {
//     int arr[] = {23, 56, 67, 78};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 67;

//     int result = linearSearch(arr, n, target);

//     if (result != -1)
//     {
//         printf("Element %d found at position %d\n", target, result);
//     }
//     else
//     {
//         printf("Element %d not found\n", target);
//     }

//     return 0;
// }

// binary search
#include <stdio.h>
int binarySearch(int arr[], int n, int target)
{
  int low = 0, high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] == target)
      return mid;
    if (arr[mid] < target)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {23, 56, 67, 78};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 67;
  int result = binarySearch(arr, n, target);
  printf("Element %d %sfound at position %d\n", target, result != -1 ? "" : "not ", result);
  return 0;
}
/*
PROCEDURE binarySearch(arr, n, target)
  low = 0
  high = n - 1

  WHILE low <= high
    mid = (low + high) / 2

    IF arr[mid] == target
      RETURN mid

    IF arr[mid] < target
      low = mid + 1
    ELSE
      high = mid - 1

  RETURN -1  // not found


  1. PROCEDURE binarySearch(arr, n, target)

This line declares a procedure (or function) named binarySearch that takes three inputs:
arr: the array to search
n: the number of elements in the array
target: the value to search for
2. low = 0

Initialize a variable low to 0. This variable will represent the lowest
index of the search range.
3. high = n - 1

Initialize a variable high to n - 1, where n is the number of elements
in the array. This variable will represent the highest index of the search range.
4. WHILE low <= high

Start a while loop that will continue to execute as long as low is less than or
equal to high. This loop will repeat until the search range is narrowed down to a
 single element or the target value is found.
5. mid = (low + high) / 2

Calculate the midpoint of the search range using the formula (low + high) / 2.
This will give us the index of the middle element of the search range.
6. IF arr[mid] == target

Check if the middle element of the search range (arr[mid]) is equal to the target
value. If it is, we've found the target value!
7. RETURN mid

If the target value is found, return the index mid where the value was found.
8. IF arr[mid] < target

If the middle element is less than the target value, we know that the target
value must be in the second half of the search range.
9. low = mid + 1

Update the low variable to mid + 1, effectively moving the search range to the
 second half of the original range.
10. ELSE

If the middle element is not less than the target value, we know that the
target value must be in the first half of the search range.
11. high = mid - 1

Update the high variable to mid - 1, effectively moving the search range
 to the first half of the original range.
12. RETURN -1

If the while loop completes without finding the target value, return -1
to indicate that the value was not found.
*/

// Assignment 2
/*Assigment 1:
Let’s create a detailed pseudocode for the program that takes a
number as input, calculates the square if it’s even, or the cube
if it’s odd, and then outputs the result. We’ll incorporate conditional and looping constructs:
*/

// problem day 2
//  problem: C program to take input from the user, to some processing on input, show computed result
#include <stdio.h>
int main()
{
  // Create the box to store integer value in RAM (memory). In C we call these boxes in memory as 'variables'. Computer
  // scientist call them 'Data Structure'
  int x;
  int y;
  // int input
  scanf("%d", &x);
  // Compute (processing), calculation, compuation, compuation is square of input number
  y = x * x;
  // int output
  printf("The square of %d is %d.", x, y);
  return 0;
}

// power
// problem: C program to take input from the user, to some processing on input, show computed result
#include <stdio.h>
#include <math.h>
int main()
{
  // Create the box to store integer value in RAM (memory). In C we call these boxes in memory as 'variables'. Computer
  // scientist call them 'Data Structure'
  int x;
  int y;
  int z;
  // int input 1, number
  printf("Enter number:");
  scanf("%d", &x);
  // int input 2, power
  printf("Enter power:");
  scanf("%d", &y);
  // Compute (processing), calculation, compuation, compuation is square of input number
  z = pow(x, y); // x to power n e.g. 2 to power 20
  // int output
  printf("%d to the power of %d is %d.", x, y, z);
  return 0;
}

// task
#include <stdio.h>

int sum(int a, int b)
{
  return a + b;
}
int product(int a, int b)
{
  return a * b;
}

int main()
{
  int num1, num2;
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  int sum_result = sum(num1, num2);
  int product_result = product(num1, num2);
  printf("Sum: %d\n", sum_result);
  printf("Product: %d\n", product_result);

  return 0;
}
//
#include <stdio.h>

int main()
{
  int num1, num2;
  printf("Enter first number:");
  scanf("%d", &num1);
  printf("Enter second number:");
  scanf("%d", &num2);
  int sum_result = num1 + num2;
  int product_result = num1 * num2;
  printf("\n%d+%d=%d", num1, num2, sum_result);
  printf("\n%d*%d=%d", num1, num2, product_result);
  return 0;
}
