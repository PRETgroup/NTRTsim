#ifndef CONNECTION1_SYNAPSE49_H_
#define CONNECTION1_SYNAPSE49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse49 States
enum Connection1Synapse49States {
    CONNECTION1_SYNAPSE49_L,
};

// connection1_synapse49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse49States state;
} Connection1Synapse49;

// connection1_synapse49 Initialisation function
void Connection1Synapse49Init(Connection1Synapse49* me);

// connection1_synapse49 Execution function
void Connection1Synapse49Run(Connection1Synapse49* me);

#endif // CONNECTION1_SYNAPSE49_H_