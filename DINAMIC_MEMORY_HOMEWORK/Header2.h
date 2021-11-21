#pragma once

void FillRand(int arr[], const unsigned int n, int minRand = 0, int maxRand = 100);
void FillRand(int** arr, const int rows, const int cols);

void Print(int arr[], const unsigned int n);
void Print(int** arr, const int rows, const int cols);

int* push_back(int arr[], unsigned int& n, int value);
int* push_front(int arr[], unsigned int& n, int value);
int* insert(int arr[], unsigned int& n, int value, unsigned int index);
int* pop_back(int arr[], unsigned int& n);
int* pop_front(int arr[], unsigned int& n);
int* erase(int arr[], unsigned int& n, int value, unsigned int index);

int** allocate(const unsigned int rows, const unsigned int cols);
void clear(int** arr, const unsigned int rows);

int** push_row_back(int** arr, unsigned int& rows, const unsigned int cols);
int** pop_row_back(int** arr, unsigned int& rows, const unsigned int cols);

void push_col_back(int** arr, const unsigned int rows, unsigned int& cols);