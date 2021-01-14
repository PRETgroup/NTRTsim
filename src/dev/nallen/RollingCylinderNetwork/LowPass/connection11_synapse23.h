#ifndef CONNECTION11_SYNAPSE23_H_
#define CONNECTION11_SYNAPSE23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse23 States
enum Connection11Synapse23States {
    CONNECTION11_SYNAPSE23_L,
};

// connection11_synapse23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse23States state;
} Connection11Synapse23;

// connection11_synapse23 Initialisation function
void Connection11Synapse23Init(Connection11Synapse23* me);

// connection11_synapse23 Execution function
void Connection11Synapse23Run(Connection11Synapse23* me);

#endif // CONNECTION11_SYNAPSE23_H_