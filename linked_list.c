#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node{
  int data;
  struct Node* next;
}Node;


typedef struct List{
  Node* n;
  Node* head;
  Node* last;
  int size;

}List;

Node* create_node(int x)
{
  Node* n = (Node *) malloc(sizeof(Node));
  n->data = x;
  n->next = NULL;
  return n;
}

List* create_list()
{
  List* l = (List *) malloc(sizeof(List));
  l->head = l->n = l->last = NULL;
  l->size = 0;
  return l;
}

void add(List* l, Node* n);
Node* get_current(List* l);
Node* get_next(List* l);
Node* get_index(List* l, int x);
bool contains(List* l, int x);
void destroy_node(Node* n);
void destroy_list(List* l);

int main(int argc, char *argv[])
{
  List* list = create_list();
  Node* n = create_node(2);
  add(list,n);
  printf("list size: %d\tnode: %d\n",list->size,list->n->data);
  n = create_node(3);
  add(list,n);
  printf("list size: %d\tnode: %d\n",list->size,list->last->data);
  n = create_node(4);
  add(list,n);
  printf("list size: %d\tnode: %d\n",list->size,list->last->data);
  for (int i = 0; i < 3; i++) {
    printf("current node: %d\n", get_current(list)->data);
  }
  for (int i = 0; i < 2; i++) {
    printf("current node: %d\n", get_next(list)->data);
  }
  n = create_node(5);
  add(list,n);
  n = create_node(6);
  add(list,n);
  n = get_index(list,2);
  printf("node in pos 2: %d\n", n->data);
  if (contains(list, 3)) {
    printf("list contains a 3\n");
  }
  if (!contains(list, 30)) {
    printf("list doesnt contain 30\n");
  }
  destroy_list(list);
  return 0;
}

void add(List* l, Node* n)
{
  if(l->head == NULL)
  {
    l->head = l->n = l->last = n;
    l->size++;
  }else{
    l->last->next = n;
    l->last = n;
    l->size++;
  }
  return;
}

Node* get_current(List* l)
{
  return l->n;
}

Node* get_next(List* l)
{
  l->n = l->n->next;
  return l->n;
}


Node* get_index(List* l, int x)
{
  Node* n = NULL;
  if (x >= l->size) {
    return n;
  }
  Node* cont = l->head;
  l->n = cont;
  int index = 0;
  while(cont != NULL){
    if (index == x) {
      return cont;
    }
    cont = get_next(l);
    index++;
  }
}


bool contains(List* l, int x)
{
  Node* cont = l->head;
  l->n = cont;
  while(cont != NULL){
    if (cont->data == x) {
      return true;
    }
    cont = get_next(l);
  }
  return false;
}

void destroy_node(Node* n)
{
  free(n);
  return;
}

void destroy_list(List* l)
{
  int size = l->size;
  Node* temp = l->head;
  l->n = temp;
  while(temp != NULL)
  {
    temp = l->n->next;
    destroy_node(l->n);
    l->n = temp;
  }
  free(l);
  return;
}
