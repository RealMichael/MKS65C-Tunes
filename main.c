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
  l = insert(l,"Power Up", "Red Velet");
  l = insert(l,"Pass By", "Nilo");
  l = insert(l,"I'm Fine", "BTS");
  l = insert(l,"Fake Love", "BTS");

  printf("TESTING PRINT_LIST\n");
  print_list(l);

  printf("TESTING PRINT NODE\n");
  print_node(l);

  return 0;
}
