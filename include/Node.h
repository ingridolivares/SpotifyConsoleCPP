#ifndef NODE_H
#define NODE_H

#include "Song.h"

struct Node{
    Song data;

    Node *next;
    Node *prev;
};

#endif