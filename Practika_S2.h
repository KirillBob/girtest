#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <iomanip>
#include "Film.h"

using namespace System;

extern int LEN;
extern Film film[];

void FromTxt(Film a[]);
void ToTxt(Film a[]);
static vector<string> customSplit(string str, char separator);
Film* SortYearUp(Film a[]);

Film* SortYearDown(Film a[]);

Film* SortRatingUp(Film a[]);

Film* SortRatingDown(Film a[]);

int* TopNum(Film a[]);

string* TopName(Film a[]);

bool NumInString(string a);