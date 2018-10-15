struct song_node {
    char name[100];
    char artist[100];
    struct song_node *next;
};

struct song_node * insert_front(struct song_node *, char *, char *);

struct song_node * insert(struct song_node *, char *, char *);

void print_list(struct song_node *);

void print_node(struct song_node *);

struct song_node * find_node(struct song_node *, struct song_node *);

struct song_node * find_artist(struct song_node *, char *);

int songcmp(struct song_node *, struct song_node *);

struct song_node * random(struct song_node *);

struct song_node * remove(struct song_node *, struct song_node *);

void free_list(struct song_node *);
