#ifndef CONNECTION1_SYNAPSE25_H_
#define CONNECTION1_SYNAPSE25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse25 States
enum Connection1Synapse25States {
    CONNECTION1_SYNAPSE25_L,
};

// connection1_synapse25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse25States state;
} Connection1Synapse25;

// connection1_synapse25 Initialisation function
void Connection1Synapse25Init(Connection1Synapse25* me);

// connection1_synapse25 Execution function
void Connection1Synapse25Run(Connection1Synapse25* me);

#endif // CONNECTION1_SYNAPSE25_H_