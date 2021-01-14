#ifndef CONNECTION1_SYNAPSE21_H_
#define CONNECTION1_SYNAPSE21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse21 States
enum Connection1Synapse21States {
    CONNECTION1_SYNAPSE21_L,
};

// connection1_synapse21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse21States state;
} Connection1Synapse21;

// connection1_synapse21 Initialisation function
void Connection1Synapse21Init(Connection1Synapse21* me);

// connection1_synapse21 Execution function
void Connection1Synapse21Run(Connection1Synapse21* me);

#endif // CONNECTION1_SYNAPSE21_H_