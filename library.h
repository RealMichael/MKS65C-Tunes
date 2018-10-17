struct song_node * table[27];

void print_library();

void print_letter(char *);

struct song_node * find(char *, char *);

struct song_node * find_artistLib(char *);

void remove_song(char *, char *);

void clear_library();

void add_song(char *,char*);

void print_artist(char *);

void shuffle(); 

int findArr(char *);
