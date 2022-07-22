#pragma once
#include"constants.h"
template<typename T>T Sum(T arr[], const int n);
int Sum(char arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T arr[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);
const char* Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T minValueIn(T arr[], const int n);
template<typename T>T maxValueIn(T arr[], const int n);

template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T shiftLeft(T arr[], const int n);
template<typename T>T shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T shiftRight(T arr[], const int n);
template<typename T>T shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS);