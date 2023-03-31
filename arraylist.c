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

  if(l->capacity==l->size)
  {
    l->data=realloc(l->data,(sizeof(void)*l->capacity)*2);
    l->capacity*=2;
  }
 
  
  for(int j=l->size-1;j>=0;j--)
    {
      l->data[j+1]=l->data[j];
      if(j==i)
      {
        l->data[i]=data;
        break;
      }
      
    }
  l->size++;
  
}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    
  if(i>=l->size)return NULL;
  if(i<0)
  {
    int aux= l->size + i;
    return l->data[aux];
  }
  return l->data[i];
  
  
  
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
