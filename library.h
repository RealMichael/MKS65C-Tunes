struct song_node * table[27];

void print_library();

void print_letter(char *);

struct song_node * find(char *, char *);

struct song_node * find_artist(char *);

void remove_song(struct song_node *);

void clear_library();

void add_song(struct song_node *);

void print_artist(char *);

void shuffle(); 