#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linkedList.h"
#include "library.h"

int main() {
  struct song_node *l = NULL;

  printf("TESTING INSERT_FRONT/INSERT/PRINT_LIST\n");
  l = insert(l, "THE BIG L", "HEY");
  print_list(l);
  l = insert(l, "THE BIG L", "ABC");
  print_list(l);
  l = insert(l, "THE BIG L", "CAT");
  print_list(l);
  l = insert(l, "THE BIG L", "ZZZ");
  print_list(l);

  printf("TESTING PRINT NODE\n");
  print_node(l);

  return 0;
}
