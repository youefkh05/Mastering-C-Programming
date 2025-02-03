#include "StackArrayDS.h"

Stack_t *CreateStack(uint32_t maxSize, StackStatus_t *ret_status) {

  // Allocate memory for the stack structure
  Stack_t *stack = (Stack_t *)malloc(sizeof(Stack_t));

  if (stack == NULL) {
    *ret_status = STACK_NOK;
    return NULL;
  }

  // Allocate memory for the stack array
  stack->StackArray = (void **)malloc(maxSize * sizeof(void *));
  if (stack->StackArray == NULL) {
    free(stack);
    *ret_status = STACK_NOK;
    return NULL;
  }

  // Initialize stack properties
  stack->ElementCount = 0;
  stack->StackMaxSize = maxSize;
  stack->StackTop = -1;

  *ret_status = STACK_OK;
  return stack;
}

Stack_t *DestroyStack(Stack_t *stack_obj, StackStatus_t *ret_status) {
  if (stack_obj == NULL) {
    *ret_status = STACK_NULL_POINTER;
    return NULL;
  }

  // Free the stack array
  if (stack_obj->StackArray != NULL) {
    free(stack_obj->StackArray);
  }

  // Free the stack structure
  free(stack_obj);

  *ret_status = STACK_OK;
  return NULL;
}