#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "linkedList.h"
#include "library.h"

int main() {
    
    int seed = time(NULL);
    srand(seed);
    
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
  
  printf("TESTING RANDOM\n");
  print_node(random_node(l));
  print_node(random_node(l));
  print_node(random_node(l));
  
  printf("TESTING FREE_LIST\n");
  //l = free_list(l);
  //print_list(l);
  
  
  
  printf("===============================================\n\n");
  printf("MUSIC LIBRARY TESTS\n\n");
  printf("===============================================\n\n");
  
  
  add_song("Lullaby", "GOT7");
  add_song("Siren", "Sunmi");
  add_song("The Hardest Part","Roy Kim");
  add_song("Good Bye", "Punch");
  add_song("Way Back Home", "Shuum");
  add_song("IDOL", "BTS");
  add_song("Love, ing", "Ben");
  add_song("Every Day, Every Moment", "Paul Kim");
  add_song("Power Up", "Red Velvet");
  add_song("DDU-DU DDU-DU", "Blackpink");
  add_song("Dance the Night Away", "TWICE");
  add_song("Lil Touch", "Oh!GG");
  add_song("Hann", "(G)I-DLE");
  add_song("Egotistic", "MAMAMOO");
  add_song("Travel", "B0L4");
  add_song("Soulmate", "Zico");
  add_song("I'm so sick", "Apink");
  add_song("Mattress", "10cm");
  add_song("Pass By", "Nilo");
  add_song("I'm Fine", "BTS");
  add_song("Fake Love", "BTS");
  
  printf("TESTING PRINT_LIBRARY\n");
  print_library();

  printf("TESTING PRINT_LETTER\n");
  printf("B list \n");
  print_letter("B");
  printf("P list \n");
  print_letter("P");
  
  printf("TESTING FIND\n");
  printf("Expect [Sunmi: Siren] to be found\n");
  print_node(find("Siren", "Sunmi"));
  printf("Expect [TWICE: Siren] to not be found\n");
  print_node(find("Siren", "TWICE"));
  printf("\n");
  
  printf("TESTING FIND_ARTISTLIB\n");
  printf("Expect [Sunmi] to be found\n");
  print_list(find_artistLib("Sunmi"));
  printf("Expect [BTS] to be found\n");
  print_list(find_artistLib("BTS"));
  printf("Expect [IU] to not be found\n");
  print_list(find_artistLib("IU"));
  
  printf("TESTING REMOVE_SONG\n");
  printf("Removing [Red Velvet: Power Up]\n");
  remove_song("Power Up", "Red Velvet");
  print_library();
  printf("Removing [BTS: Fake Love]\n");
  remove_song("Fake Love", "BTS");
  print_library();
  
  // LOOK AT THIS CASE
  //printf("Removing [BTS: Siren]\n");
  //remove_song("Siren", "BTS");
  //print_library();
  
  printf("TESTING PRINT_ARTIST\n");
  printf("Printing BTS\n");
  print_artist("BTS");
  printf("\nPrinting TWICE\n");
  print_artist("TWICE");
  printf("\n");
  
  printf("TESTING SHUFFLE\n");
  shuffle();
  printf("\n");
  
  printf("TESTING CLEAR_LIBRARY\n");
  clear_library();
  print_library();
  
  
  return 0;
}
