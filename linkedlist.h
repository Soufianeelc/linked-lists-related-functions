#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<stdlib.h>
#include<stdio.h>

typedef struct node{
    int value;
    struct node* next;
} node;


//* create a new node and returns its memory adress

node* createNode(int val){
    node* n=(node*)malloc(sizeof(node));
    n->value=val;
    n->next=NULL;
    return n;
}
//prints all nodes values
void printNodeValue(node* head){
    node* ptr = head;
    
    do{
        printf("%d\n",ptr->value);
        ptr=ptr->next;
        }while(ptr->next!=NULL);
    
    //since the last node's value is NULL it will be ignored by the loop,
    //this instruction is to print the last node's value
        printf("%d",ptr->value);
}

//create node at the beginning of the list and returns it memory adress
node* createNodeFirst(node* head, int val){
    node *n=createNode(val);
    n->next=head;
    
    return n;
}

//get the last node's memory adress
node* get_last_node(node* head){
    node* ptr = head;
        
    do{
        ptr=ptr->next;

    }while(ptr->next!=NULL);

    return ptr;
}

//create a new node at the end of the list
void create_at_end(node* head,int val){

    node* ptr = get_last_node(head);

    ptr->next = createNode(val);
}

//count list nodes

int countNodes(node* head){
    node* ptr = head;
    int counter=1;

    if(ptr->next!=NULL){
        do{
            ptr=ptr->next;
            counter += 1;

        }while(ptr->next!=NULL);
    }
    return counter;
}

//convert the linkedlist to an array

int* create_array(node* head){
    
    int* arr = (int*)malloc( countNodes(head) * sizeof(int) );

    node* ptr = head;

    for(int i=0; i<countNodes(head); i+=1){

        arr[i] = ptr->value;

        ptr = ptr->next;

    }

    return arr;
}

#endif