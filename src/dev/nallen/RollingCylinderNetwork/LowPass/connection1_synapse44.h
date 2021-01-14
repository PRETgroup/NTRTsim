#ifndef CONNECTION1_SYNAPSE44_H_
#define CONNECTION1_SYNAPSE44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse44 States
enum Connection1Synapse44States {
    CONNECTION1_SYNAPSE44_L,
};

// connection1_synapse44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse44States state;
} Connection1Synapse44;

// connection1_synapse44 Initialisation function
void Connection1Synapse44Init(Connection1Synapse44* me);

// connection1_synapse44 Execution function
void Connection1Synapse44Run(Connection1Synapse44* me);

#endif // CONNECTION1_SYNAPSE44_H_