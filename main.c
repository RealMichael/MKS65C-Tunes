#include <stdio.h>
//#include "linkedList.h"
#include <stdlib.h>



struct song_node {
    char name[100];
    char artist[100];
    struct song_node *next;
};


struct song_node * insert_front(struct song_node *list, char *n, char *a) {
    struct song_node *front = malloc(sizeof(front));
    strcpy(front->name, n);
    strcpy(front->artist, a);
    front->next = list;
    return front;
}

struct song_node * insert(struct song_node *list, char *n, char *a) {
    struct song_node *rN = list;
    struct song_node *new = malloc(sizeof(new));
    strcpy(new->name, n);
    strcpy(new->artist, a);
    struct song_node *prev = list;

     if(!list){
	return insert_front(list,n,a);
    }
    if (songcmp(new, list) < 0) {
            new->next = list;
            return new;
    }
    while (list->next) {
        if (songcmp(new, list->next) < 0) {
            new->next = list->next;
            list->next = new;
            return rN;
        }
        list = list->next;
    }
    list->next = new;
    return rN;
}

void print_list(struct song_node *list) {
    if (list) {
        while (list->next) {
            print_node(list);
            list = list->next;
        }
        print_node(list);
    }
}

void print_node(struct song_node *p) {
    if (p) {
        printf("%s: %s\n", p->artist, p->name);
    }
}
int songcmp(struct song_node *n1, struct song_node *n2) {
    int returnVal = strcmp(n1->artist, n2->artist);
    if (!returnVal) {
        returnVal = strcmp(n1->name, n2->name);
    }
    return returnVal;
}


int main(){
	struct song_node * test;

	//printf("testing insertion in the front");
	test = insert(test,"Understand the Concepts", "Wang");
	//print_list(test);

	//printf("testing alphabetical ordering!!);
	//test = insert(test,"Balloons in Physics", "Wang");

	//test = insert(test,"Don't understand", "Wang");
	//test = insert(test, "Keeps the doc Away", "Apple");
	test = insert(test, "Apples are no good","Wang");
		print_list(test);
	return 0;
}






