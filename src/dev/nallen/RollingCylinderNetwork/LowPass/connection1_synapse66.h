#ifndef CONNECTION1_SYNAPSE66_H_
#define CONNECTION1_SYNAPSE66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse66 States
enum Connection1Synapse66States {
    CONNECTION1_SYNAPSE66_L,
};

// connection1_synapse66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse66States state;
} Connection1Synapse66;

// connection1_synapse66 Initialisation function
void Connection1Synapse66Init(Connection1Synapse66* me);

// connection1_synapse66 Execution function
void Connection1Synapse66Run(Connection1Synapse66* me);

#endif // CONNECTION1_SYNAPSE66_H_