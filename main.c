#include <stdio.h>
#include "linkedList.h"
#include <stdlib.h>

int main(){
	struct song_node * test;

	//printf("testing insertion in the front");
	test = insert_front(test,"Wang","Understand the Concepts");
	print_list(test);

	//printf("testing alphabetical ordering!!);
	test = insert(test,"Wang","Don't understand the Concepts");
	test = insert(test,"Apple", "Keeps the doc Away");
	test = insert(test,"Wang", "Apples are no good");
	print_list(test);
	return 0;
}