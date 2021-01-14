#ifndef CONNECTION1_SYNAPSE50_H_
#define CONNECTION1_SYNAPSE50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse50 States
enum Connection1Synapse50States {
    CONNECTION1_SYNAPSE50_L,
};

// connection1_synapse50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse50States state;
} Connection1Synapse50;

// connection1_synapse50 Initialisation function
void Connection1Synapse50Init(Connection1Synapse50* me);

// connection1_synapse50 Execution function
void Connection1Synapse50Run(Connection1Synapse50* me);

#endif // CONNECTION1_SYNAPSE50_H_