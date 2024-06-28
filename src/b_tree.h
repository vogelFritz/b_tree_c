typedef struct b_tree_node_t {
    int m;
    int* keys;
    struct b_tree_node_t** children;
} b_tree_node_t;

typedef b_tree_node_t* b_tree_t;

void b_tree_init(b_tree_t* b_tree, int max_degree);

int b_tree_get_max_degree(b_tree_t b_tree);

void b_tree_add(b_tree_t* b_tree, int elem);

void b_tree_remove(b_tree_t* b_tree, int elem);

int b_tree_contains(b_tree_t b_tree, int elem);

char* b_tree_to_string(b_tree_t b_tree);

void b_tree_clear(b_tree_t* b_tree);
