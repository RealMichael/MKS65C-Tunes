#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "library.h"
#include "linkedList.h"
#include <ctype.h>

struct song_node * table[27];

int findArr(char * artist){
	int arrNum = 26;
	if((tolower(artist[0])) >= 'a' && (tolower(artist[0])) <= 'z'){
        arrNum = (tolower(artist[0])) - 97;
	}
	return arrNum;
}

void print_library(){
	int i = 0;
	while(i < 27){
        if (table[i]) {
            if (i != 26) {
                printf("%c list\n", i+65);
            } else {
                printf("special characters list\n");
            }
            print_list(table[i]);
        }
		i++;
	}
}

void print_letter(char * let){
	int res = findArr(let);
	print_list(table[res]);
}
	
	

struct song_node * find(char * songName, char * artist){
	int res = findArr(artist);
	struct song_node * result = find_node(table[res],songName,artist);
	return result;
}
	

struct song_node * find_artistLib(char * artist){
	int res = findArr(artist);
	return (find_artist(table[res], artist));
	}

void remove_song(char* songName, char * artist){
    printf("AHHH");
	struct song_node * res = find(songName,artist);
	printf("HERE?");
	int res2 = findArr(artist);
	table[res2] = remove_node(table[res2],res);
}

void clear_library(){
	
	int i = 0;
	while(i < 27){
        if (table[i]) {
            free_list(table[i]);
        }
        i ++;
	}
}

void add_song(char* son, char* art){
        int res = findArr(art);
        table[res] = insert(table[res],son,art);
	}



void print_artist(char * artist){
	
	int res = findArr(artist);
	struct song_node * list = find_artist(table[res], artist);
	while(list){
        if(!strcmp(list->artist,artist)){
            print_node(list);
        }
        list = list -> next;
    }
}


void shuffle(){
    int songsReturn = 5;
    while (songsReturn) {
        int num = rand() % 27;
        if (table[num]) {
            print_node(random_node(table[num]));
            songsReturn--;
        }
    }
}









