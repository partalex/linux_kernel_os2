#pragma once
#include<Windows.h>
#include <stdlib.h>

void lock(HANDLE);
void unlock(HANDLE);
void* return_and_unlock(HANDLE, void*);
HANDLE create_mutex();

