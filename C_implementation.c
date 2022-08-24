#include <stdio.h>
#include <string.h>

void array_mutation(int len, int * array_input);
int array_length_check(int len);
int array_element_check(int len, int * array_input);

void main() {

  while (1) {

    ////Inputting Array Length////
    int len;
    printf("Input the length of the array: ");
    scanf("%d", & len);
    printf("%i\n", len);

    ////Guarantee Condition Check for Length////
    if (array_length_check(len) == 1) {
      continue;
    }

    ////User Input Array////
    int input_array[len];
    printf("Input the array elements one by one: ");

    for (int i = 0; i < len; i++) {
      scanf("%d", & input_array[i]);
    }

    ////Checking the element condition////
    if (array_element_check(len, input_array) != 0) {
      printf("***Error***");
      printf("\nCheck the elements of the array, they should be between -10^3 to 10^3\n");
      printf("\n........\n");
      continue;
    }

    ////Mutating Array////
    array_mutation(len, input_array);

  }
}

////Array Mutation function////
void array_mutation(int len, int * array_input) {
  int mutated_array[len];
  for (int i = 0; i < len; i++) {
    if (len == 1) {
      mutated_array[i] = array_input[i];
    } else {
      if (i == 0) {
        mutated_array[i] = array_input[i] + array_input[i + 1]; //+ a[i - 1]
      } else if (i == (len - 1)) {
        mutated_array[i] = array_input[i] + array_input[i - 1]; //+ a[i + 1]
      } else {
        mutated_array[i] = array_input[i] + array_input[i + 1] + array_input[i - 1];
      }
    }
  }
  printf("The mutated array is: ");
  for (int i = 0; i < len; i++) {
    printf("%d  ", mutated_array[i]);
  }
  printf("\n\n........\n");
}

////Array length check////
int array_length_check(int len) {
  if (len < 1 || len > 1000) {
    printf("The length of the array has to be between 1<=Length<=10^3.\n");
    printf("\n........\n");
    return 1;
  } else {
    return 0;
  }
}

////Array element check////
int array_element_check(int len, int * array_input) {

  int error_flag = 0;

  for (int i = 0; i < len; i++) {
    if (array_input[i] < -1000 || array_input[i] > 1000) {
      error_flag++;
    }
  }

  return error_flag;
}
/////EOF/////
