#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
void* heap(int);
void* fit(int);

struct Block{
    struct Block *next;
    struct Block *prev;
    int size;
    int occ;
};
struct Block *tail;
struct Block *head;

void dump_heap()
{
    struct Block *cur;
    printf("brk: %p\n", sbrk(0));
    printf("head->");
    for(cur = head; cur != NULL; cur = cur->next) {
        printf("[%d:%ld:%d]->", cur->occ, (char*)cur - (char*)head, cur->size);
        fflush(stdout);
        assert((char*)cur >= (char*)head && (char*)cur + cur->size <= (char*)sbrk(0)); // check that block is within bounds of the heap
        if(cur->next != NULL) {
            assert(cur->next->prev == cur); // if not last block, check that forward/backward links are consistent
            assert((char*)cur + cur->size == (char*)cur->next); // check that the block size is correctly set
        }
    }
    printf("NULL\n");
}

void *my_malloc(int size) {
    struct Block *new = NULL;
    struct Block *split = NULL;
  //checks if any nodes exist
    if(head == NULL){
        head = sbrk(sizeof(struct Block) + size);
        head-> size = size + sizeof(struct Block);
        head-> occ = 1;
        head-> next = NULL;
        head->prev = NULL;
        tail = head;
        new = head;
    //returns pointer arithemetic +1 area after head
        return new +1 ;
    }
  //checks if block can fit
    new = fit(size);
  //if block did not fit allocate more space
    if(new == NULL) {
        new = (heap(size));
    }
  //splits block if needed
    else if(new->size > sizeof(struct Block)*2 + size){
  split = (struct Block*)((char*)new + (sizeof(struct Block) + size));
  split->next = new->next;
  split->prev = new;
  split->next->prev = split;
  split->occ = 0;
  split->size = (int)(new->size - (sizeof(struct Block) + size));
  new->occ = 1;
  new->size = sizeof(struct Block) + size;
  new->next = split;
  return new + 1;
}
  //changes block occupancy because block was not null
    else {
        new->occ = 1;
    }
  //return area after block
    return new + 1;
}

void my_free(void *block) {
  //checks if block is empty
    if(block == NULL){
  return;
    }
  //assign free to the returned value from mymalloc - size of entire block 
    struct Block *free = block - sizeof(struct Block);
    free->occ = 0;
  //checks if this block is the last node and it is not the first node
    if(free == tail && free != head){
            tail = free->prev;
            tail->next = NULL;
  //deallocates heap
            sbrk(-1 * free->size);
  //if tail is not occupied recursive call function 
     if(tail->occ == 0){
              my_free((void*)tail + sizeof(struct Block));
     }
  return;
   }
  //checks if block is equal to last node and equal to first node
   if(free == tail && free == head){
  head = tail = NULL;
  //de-allocates space
        sbrk(-1 * free->size);
        return;
   }
  //checks if next block is occupied
    if(free->next->occ == 0){
        free->size += free->next->size;
        free->next = free->next->next;
        if(free->next == NULL){
  tail = free;
  }
     else{
        free->next->prev = free;
  }
    }
    if(free != head && free->prev->occ == 0){
   free->prev->size += free->size;
   free->prev->next = free->next;
   free->next->prev = free->prev;
    }

}

void* heap(int size) {
    struct Block *n;
    n = sbrk(size + sizeof(struct Block));
    tail->next = n;
    n->size = size + sizeof(struct Block);
    n->occ = 1;
    n->next = NULL;
    n->prev = tail;
    tail = n;
    return n;
}
void* fit(int size) {
    struct Block *best = NULL;
    struct Block *n = head;
    while(n != NULL) {
        if(n->occ == 0){
            if((n->size >= size + sizeof(struct Block)) && (best == NULL || n->size < best->size)) {
                best = n;
    if(best->size == size + sizeof(struct Block)) {
      best->occ = 1;
      return best;
                }
      }
            if(best != NULL && best->size == size + sizeof(struct Block)){
                break;    // Best size found
            }
        }
        n = n -> next;
                      }
    return best;
}


