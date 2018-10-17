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
	print_list(*(arr + res));
}
	
	

struct song_node * find(char * songName, char * artist){
	song_node * arr = table;
	int res = strcmp(artist,"a");
	song_node * result = find_node(find_artist(artist), songName);
	return result;
}
	

struct song_node * find_artistLib(char *){
	song_node * arr = table;
	int res = strcmp(let,"a");
	return (*(arr + res));
	}

void remove_song(char* songName, char * artist){
	struct song_node res = find(songName,artist);
	song_node * arr = table;
	int res2 = strcmp(artist,"a");
	remove_node(find_artist(artist),res);

void clear_library(){
	song_node arr = table;
	int i = 0;
	while(i < 27){
	free_list(arr + i);
	i ++;
	}
}

void add_song(char* son, char* art){
	song_node * arr = table;
	int res = strcmp(art,"a");
	insert(find_artist(son),son,art);
	}



void print_artist(char * artist){
	song_node * arr = find_artist(artist);
	if(arr){
		while(list -> next){
		if(list-> artist == artist){
			print_node(list);
			list = list -> next;
		}
	}
			if(list -> artist == artist){
				print_node(list);
		}
	}
	}


void shuffle(){
	int num = rand() % 27;
	
	struct song_node * arr = table;
	print_node(arr + num);
}









