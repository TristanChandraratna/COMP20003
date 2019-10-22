#ifndef __AI__
#define __AI__

#include <stdint.h>
#include <unistd.h>
#include "node.h"
#include "priority_queue.h"


struct prop_s{
    float total;
    int numChild;
};
typedef struct prop_s prop_t;

void initialize_ai();

move_t get_next_move( state_t init_state, int budget, propagation_t propagation, char* stats );

move_t GraphSearch(struct heap *Graph, node_t* parent, propagation_t propagation, int budget);

void backPropagation(prop_t *propagationTotal[], propagation_t propagation, node_t *node, float acc_reward);

void changeDirection(node_t* node, move_t move);

bool my_execute_move_t(state_t* state, move_t move);

bool checkIfInUnsortedArr(node_t *arr[], int len, node_t *n);

#endif
