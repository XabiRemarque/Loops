#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct IntArray {
  int *data;
  int size;
} IntArray;

IntArray CreateNullArray(int size) {
  if (size == 0) {
    IntArray emptyArray;
    emptyArray.size = 0;
    emptyArray.data = NULL;
    return emptyArray;
  }

  int *data = (int *)malloc(size * sizeof(int));
  // Ввод элементов массива

  IntArray result;
  result.size = size;
  result.data = data;
  for (int i = 0; i < result.size; i++) {
    data[i] = 0;
  }

  return result;
}

void PrintIntArray(IntArray array) {
  printf("Size: %d\n", array.size);
  printf("Array:");
  for (int i = 0; i < array.size; i++) {
    printf(" %d", array.data[i]);
  }
  printf("\n");
}

void Destructor(IntArray *a) // (->) потому что тут *a
{
  free(a->data); // очищение динамически выделенной памяти посредством передачи
                 // указателя на нее в функцию free
  a->size = 0;
}

void kek() {
  IntArray loh = CreateNullArray(10);
  // memory leak
}

IntArray NewIntArray(int size_n, int numb) {
  int *data = (int *)malloc(size_n * sizeof(int));

  IntArray result_n;
  result_n.size = size_n;
  result_n.data = data;
  for (int i = 0; i < result_n.size; i++) {
    data[i] = numb;
  }

  return result_n;
}

IntArray AddNumberIntArray_go(IntArray array, int numb) {
  IntArray newArray;
  newArray.size = array.size + 1;
  newArray.data = (int *)malloc(newArray.size * sizeof(int));
  // int lastArraySize = array.size;
  for (int i = 0; i < array.size; i++) {
    newArray.data[i] = array.data[i];
  }
  newArray.data[newArray.size - 1] = numb;

  return newArray;
}

void AddNumberIntArray_c(IntArray *array, int numb) {
  int *arr_1 = array->data;
  array->size = array->size + 1;
  array->data = (int *)malloc(array->size * sizeof(int));
  for (int i = 0; i < array->size - 1; i++) {
    array->data[i] = arr_1[i];
  }
  array->data[array->size - 1] = numb;
  free(arr_1);
  arr_1 = NULL;
}

IntArray InsertNumberIntArray_go(IntArray array, int numb, int position) {
  if (array.size < position) {
    IntArray emptyArray;
    emptyArray.size = 0;
    emptyArray.data = NULL;
    return emptyArray;
  }

  IntArray newArray;

  newArray.size = array.size + 1;
  newArray.data = (int *)malloc(newArray.size * sizeof(int));
  for (int i = 0; i < position; i++) {
    newArray.data[i] = array.data[i];
  }

  newArray.data[position] = numb;

  for (int i = 0; i < newArray.size - position; i++) {
    newArray.data[position + 1 + i] = array.data[position + i];
  }

  free(array.data);

  return newArray;
}

// TODO
// InsertNumberIntArray - си стиль

bool FindNumbIntArray(IntArray array, int numb) {
  for (int i = 0; i < array.size; i++) {
    if (array.data[i] == numb) {
      return true;
    }
  }
  return false;
}

int main() {

  // Тестирование AddNumberIntArray_go
  {

    // Пустая структура
    printf("AddNumberIntArray_go\n");
    IntArray empty = CreateNullArray(0);
    IntArray result = AddNumberIntArray_go(empty, 5);
    PrintIntArray(result);

    // Заполненная структура
    IntArray arr = CreateNullArray(3);
    IntArray result_1 = AddNumberIntArray_go(arr, 5);
    PrintIntArray(result_1);
  }

  // Тестирование AddNumberIntArray_c
  {
    printf("\nAddNumberIntArray_c\n");
    IntArray empty = CreateNullArray(0);
    PrintIntArray(empty);
    AddNumberIntArray_c(&empty, 5);
    PrintIntArray(empty);
  }

  // InsertNumberIntArray_go
  {
    printf("\nInsertNumberIntArray_go\n");
    IntArray empty = CreateNullArray(6);
    IntArray result_1 = InsertNumberIntArray_go(empty, 5, 4);
    PrintIntArray(result_1);
  }

  printf("\n");
  // Filled structures

  // Тестирование AddNumberIntArray_go
  {

    // Пустая структура
    printf("AddNumberIntArray_go\n");
    IntArray arr_1 = NewIntArray(7, 5);
    PrintIntArray(arr_1);

    // Заполненная структура
    IntArray result_1 = AddNumberIntArray_go(arr_1, 9);
    PrintIntArray(result_1);
  }

  // Тестирование AddNumberIntArray_c
  {
    printf("\nAddNumberIntArray_c\n");
    IntArray arr_1 = NewIntArray(7, 5);
    PrintIntArray(arr_1);
    AddNumberIntArray_c(&arr_1, 8);
    PrintIntArray(arr_1);
  }

  // InsertNumberIntArray_go
  {
    printf("\nInsertNumberIntArray_go\n");
    IntArray arr_1 = NewIntArray(7, 5);
    IntArray result_1 = InsertNumberIntArray_go(arr_1, 9, 4);
    PrintIntArray(result_1);
  }
}