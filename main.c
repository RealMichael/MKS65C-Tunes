#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linkedList.h"
#include "library.h"

int main() {
  struct song_node *fl = NULL;

  fl = insert_front(fl, "THE BIG L", "HEY");
  fl = insert_front(fl, "THE BIG L", "ABC");
  fl = insert_front(fl, "THE BIG L", "CAT");
  fl = insert_front(fl, "THE BIG L", "ZZZ");

  struct song_node *l = NULL;
    
  l = insert(l,"Lullaby", "GOT7");
  l = insert(l,"Siren", "Sunmi");
  l = insert(l,"The Hardest Part","Roy Kim");
  l = insert(l,"Good Bye", "Punch");
  l = insert(l,"Way Back Home", "Shuum");
  l = insert(l,"IDOL", "BTS");
  l = insert(l,"Love, ing", "Ben");
  l = insert(l,"Every Day, Every Moment", "Paul Kim");
  l = insert(l,"Power Up", "Red Velvet");
  l = insert(l,"Pass By", "Nilo");
  l = insert(l,"I'm Fine", "BTS");
  l = insert(l,"Fake Love", "BTS");

  printf("TESTING PRINT_LIST\n");
  print_list(l);

  printf("TESTING PRINT NODE\n");
  print_node(l);
  printf("\n");

  printf("TESTING FIND_NODE\n");
  printf("Expect [Sunmi: Siren] to be found\n");
  print_node(find_node(l,"Siren", "Sunmi"));
  printf("Expect [TWICE: Siren] to not be found\n");
  print_node(find_node(l,"Siren", "TWICE"));
  printf("\n");
  
  printf("TESTING FIND_ARTIST\n");
  printf("Expect [Sunmi] to be found\n");
  print_list(find_artist(l,"Sunmi"));
  printf("Expect [BTS] to be found\n");
  print_list(find_artist(l,"BTS"));
  printf("Expect [Nilo] to be found\n");
  print_list(find_artist(l,"Nilo"));
  printf("Expect [TWICE] to not be found\n");
  print_list(find_artist(l,"TWICE"));
  
  printf("TESTING SONGCMP\n");
  struct song_node * a = insert_front(a,"IDOL", "BTS");
  struct song_node * b = insert_front(b, "Fake Love", "BTS");
  struct song_node * c = insert_front(c, "Lullaby", "GOT7");
  
  printf("Expect 0: %d\n",songcmp(a,a));
  printf("Expect >0: %d\n",songcmp(a,b));
  printf("Expect <0: %d\n",songcmp(b,a));
  printf("Expect <0: %d\n",songcmp(a,c));
  printf("\n");
  
  printf("TESTING REMOVE\n");
  struct song_node * d = insert_front(d, "Power Up", "Red Velvet");
  struct song_node * e = insert_front(e, "Siren", "BTS");
  printf("Removing [Red Velvet: Power Up]\n");
  l = remove_node(l, d);
  print_list(l);
  printf("Removing [BTS: Fake Love]\n");
  l = remove_node(l, b);
  print_list(l);
  printf("Removing [BTS: Siren]\n");
  l = remove_node(l, e);
  print_list(l);
  
  printf("TESTING FREE_LIST\n");
  l = free_list(l);
  print_list(l);
  
  
  return 0;
}
