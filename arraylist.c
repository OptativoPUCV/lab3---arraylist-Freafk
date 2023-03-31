#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {

  ArrayList *lista=malloc(sizeof(ArrayList));
  lista->data=malloc(sizeof(void)*2);
  lista->capacity=2;
  lista->size=0;
  return lista;
}

void append(ArrayList * l, void * data){
  if(l->size==0)
  {
    l->data[0]=data;
  }
  else{
    if(l->size==l->capacity)
    {
      void* temp=l->data;
      temp=realloc(temp, (l->capacity * 2 * sizeof(void*)));
      l->data=temp;
      l->capacity *=2;
      l->data=temp;
    }
    l->data[l->size]=data;
    
  }
  l->size++;
  
}

void push(ArrayList * l, void * data, int i){

  if(l->capacity==l->size+1)
  {
    l->data=realloc(l->data,(sizeof(void)*l->capacity)*2);
    l->capacity*=2;
  }
 
  
  for(int j=l->size-1;j>i;j--)
    {
      l->data[j+1]=l->data[j];
      if(ji)break;
      
      
    }
  l->data[i]=data;
  l->size++;

  
}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
