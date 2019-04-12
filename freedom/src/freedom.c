#include <freedom/freedom.h>

struct _freedom_document
{
    freedom_node_t *body;
};

struct _freedom_node
{
    freedom_node_type_t type;
    const char *tag_name;
    const char *text;
    freedom_node_list_t *children;
};

struct _freedom_node_list
{
    int64_t size;
    freedom_node_t *nodes;
};