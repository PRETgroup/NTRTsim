#ifndef CONNECTION1_SYNAPSE54_H_
#define CONNECTION1_SYNAPSE54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse54 States
enum Connection1Synapse54States {
    CONNECTION1_SYNAPSE54_L,
};

// connection1_synapse54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse54States state;
} Connection1Synapse54;

// connection1_synapse54 Initialisation function
void Connection1Synapse54Init(Connection1Synapse54* me);

// connection1_synapse54 Execution function
void Connection1Synapse54Run(Connection1Synapse54* me);

#endif // CONNECTION1_SYNAPSE54_H_