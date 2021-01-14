#ifndef CONNECTION1_SYNAPSE98_H_
#define CONNECTION1_SYNAPSE98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse98 States
enum Connection1Synapse98States {
    CONNECTION1_SYNAPSE98_L,
};

// connection1_synapse98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse98States state;
} Connection1Synapse98;

// connection1_synapse98 Initialisation function
void Connection1Synapse98Init(Connection1Synapse98* me);

// connection1_synapse98 Execution function
void Connection1Synapse98Run(Connection1Synapse98* me);

#endif // CONNECTION1_SYNAPSE98_H_