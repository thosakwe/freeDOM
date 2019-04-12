// Copyright (c) 2019, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// license that can be found in the LICENSE file.
#ifndef FREEDOM_FREEDOM_H
#define FREEDOM_FREEDOM_H

#include <stdint.h>

typedef struct _freedom_document freedom_document_t;
typedef struct _freedom_node freedom_node_t;
typedef struct _freedom_node_list freedom_node_list_t;

typedef enum
{
    FREEDOM_NODE_TEXT,
    FREEDOM_NODE_ELEMENT
} freedom_node_type_t;

freedom_node_t *freedom_document_create_text(const char *text);

freedom_node_t *freedom_document_create_element(const char *tag_name);

freedom_node_type_t freedom_node_get_type(freedom_node_t *node);

const char *freedom_node_get_tag_name(freedom_node_t *node);

const char *freedom_node_get_text(freedom_node_t *node);

freedom_node_list_t *freedom_node_get_children(freedom_node_t *node);

freedom_node_t *freedom_node_list_get(freedom_node_list_t *list, int64_t index);

const char *freedom_node_list_append(freedom_node_list_t *list, freedom_node_t *node);

freedom_node_t *freedom_node_list_remove(freedom_node_list_t *list, int64_t index);

int64_t freedom_node_list_index_of(freedom_node_list_t *list, freedom_node_t *node);

#endif //FREEDOM_FREEDOM_H
