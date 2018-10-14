#include <stdio.h>
#include <string.h>

struct song_node {
    char name[100];
    char artist[100];
    struct song_node *next;
};

void insert_front(struct song_node *list, char *n, char *a) {
    struct song_node *front = malloc(sizeof(front));
    strcpy(front->name, n);
    strcpy(front->artist, a);
    front->next = list;
    return front;
}

void insert(struct song_node *, char *, char *);

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
        printf("%s: %s\n", p->name, p->artist)
    }
}

struct song_node * find_node(struct song_node *, struct song_node *);

struct song_node * find_artist(struct song_node *, char *);

int songcmp(struct song_node *, struct song_node *);

struct song_node * random(struct song_node *)

void remove(struct song_node *, struct song_node *);

void free_list(struct song_node *list) {
    if (list->next) {
        free_list(list->next);
    }
    free(list);
    return list;

}