#ifndef CONNECTION1_SYNAPSE86_H_
#define CONNECTION1_SYNAPSE86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse86 States
enum Connection1Synapse86States {
    CONNECTION1_SYNAPSE86_L,
};

// connection1_synapse86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse86States state;
} Connection1Synapse86;

// connection1_synapse86 Initialisation function
void Connection1Synapse86Init(Connection1Synapse86* me);

// connection1_synapse86 Execution function
void Connection1Synapse86Run(Connection1Synapse86* me);

#endif // CONNECTION1_SYNAPSE86_H_