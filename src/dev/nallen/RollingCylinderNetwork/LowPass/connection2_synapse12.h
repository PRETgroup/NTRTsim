#ifndef CONNECTION2_SYNAPSE12_H_
#define CONNECTION2_SYNAPSE12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse12 States
enum Connection2Synapse12States {
    CONNECTION2_SYNAPSE12_L,
};

// connection2_synapse12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse12States state;
} Connection2Synapse12;

// connection2_synapse12 Initialisation function
void Connection2Synapse12Init(Connection2Synapse12* me);

// connection2_synapse12 Execution function
void Connection2Synapse12Run(Connection2Synapse12* me);

#endif // CONNECTION2_SYNAPSE12_H_