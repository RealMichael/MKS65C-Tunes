#include <stdio.h>
#include <string.h>
#include "library.h"
#include "linkedList.h"

struct song_node * table[27];

void print_library(){
	song_node * arr = table;
	int i = 0;
	while(i < 27){
		print_list(arr + i);
		i ++;
	}
    }

void print_letter(char * let){
	song_node * arr = table;
	int res = strcmp(let,"a");
	print_list(arr + res);
}
	
	

struct song_node * find(char *, char *);

struct song_node * find_artist(char *);

void remove_song(struct song_node *);

void clear_library();

void add_song(char*, char*);

void print_artist(char *);

void shuffle(); 
