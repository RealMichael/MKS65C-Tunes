#include <stdio.h>
#include <string.h>
#include "library.h"
#include "linkedList.h"
#include <ctype.h>

struct song_node * table[27];

int findArr(char * artist){
	int arrNum = -1;
	if(putchar(tolower(artist[0])) >= 'a' && putchar(tolower(artist[0])) <= 'z'){
	arrNum = putchar(tolower(artist[0])) - 97;
	}
	else{
	return arrNum;
	}
	return arrNum;
	}

void print_library(){
	//struct song_node * arr = table;
	int i = 0;
	while(i < 27){
		print_list(table[i]);
		i ++;
	}
    }

void print_letter(char * let){
	//struct song_node * arr = table;
	//int res = strcmp(let,"a");
	int res = findArr(let);
	print_list(table[res]);
}
	
	

struct song_node * find(char * songName, char * artist){
	//struct song_node * arr = table;
	//int res = strcmp(artist,"a");
	int res = findArr(artist);
	struct song_node * result = find_node(table[res],songName,artist);
	return result;
}
	

struct song_node * find_artistLib(char * let){
	//struct song_node * arr = table;
	//int res = strcmp(let,"a");
	int res = findArr(let);
	return (table[res]);
	}

void remove_song(char* songName, char * artist){
	struct song_node * res = find(songName,artist);
	//struct song_node * arr = table;
	//int res2 = strcmp(artist,"a");
	int res2 = findArr(artist);
	remove_node(table[res2],res);
}

void clear_library(){
	//struct song_node * arr = table;
	int i = 0;
	while(i < 27){
	free_list(table[i]);
	i ++;
	}
}

void add_song(char* son, char* art){
	//struct song_node * arr = table;
	//int res = strcmp(art,"a");
	int res = findArr(art);
	insert(table[res],son,art);
	}



void print_artist(char * artist){
	//struct song_node * arr = find_artistLib(artist);
	int res = findArr(artist);
	struct song_node * list = table[res];
	if(list){
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
	/*int num = rand() % 27;
	
	struct song_node * arr = table;
	print_node(arr + num);
	*/
}









