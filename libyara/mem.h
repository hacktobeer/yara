/*
Copyright (c) 2007. Victor M. Alvarez [plusvic@gmail.com].

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef _MEM_H
#define _MEM_H

#include <stdio.h>

#include "config.h"

#ifdef DMALLOC

#define yr_malloc malloc
#define yr_realloc realloc
#define yr_free free
#define yr_strdup strdup

#include <dmalloc.h>

#else

void* yr_malloc(
		size_t size);

void* yr_realloc(
		void* ptr,
		size_t size);

void yr_free(
		void *ptr);

char* yr_strdup(
		const char *str);

#endif

void yr_heap_alloc();

void yr_heap_free();

#endif


