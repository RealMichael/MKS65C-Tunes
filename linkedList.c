#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linkedList.h"


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

struct song_node * find_node(struct song_node *list, char *n, char *a) {
    struct song_node *s = NULL;
    s = insert_front(s, n, a);
    while(list) {
        if (!songcmp(list,s)) {
            return list;
        }
    }
    s = free(s);
}

struct song_node * find_artist(struct song_node *list, char *n) {
    while(list) {
        if (!strcmp(list->artist,n)) {
            return list;
        }
    }
}

// return 0 if equal
// return <0 if s1 is before
// return >0 if s1 is after
int songcmp(struct song_node *n1, struct song_node *n2) {
    int returnVal = strcmp(n1->artist, n2->artist);
    if (!returnVal) {
        returnVal = strcmp(n1->name, n2->name);
    }
    return returnVal;
}

//struct song_node * random(struct song_node *);

struct song_node * remove_node(struct song_node *list, struct song_node *n) {
    struct song_node *rN = list;
    if (!songcmp(list, n)) {
        rN = list->next;
        free(list);
        return rN;
    }
    while (list->next) {
        if (!songcmp(list->next, n)) {
            struct song_node *f = list->next;
            list->next = f->next;
            free(f);
            return rN;
        }
        list = list->next;
    }
    return rN;
}

struct song_node * free_list(struct song_node *list) {
    if (list->next) {
        free_list(list->next);
    }
    free(list);
    return list;

}
