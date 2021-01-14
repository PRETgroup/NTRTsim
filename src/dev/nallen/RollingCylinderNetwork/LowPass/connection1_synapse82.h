#ifndef CONNECTION1_SYNAPSE82_H_
#define CONNECTION1_SYNAPSE82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse82 States
enum Connection1Synapse82States {
    CONNECTION1_SYNAPSE82_L,
};

// connection1_synapse82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse82States state;
} Connection1Synapse82;

// connection1_synapse82 Initialisation function
void Connection1Synapse82Init(Connection1Synapse82* me);

// connection1_synapse82 Execution function
void Connection1Synapse82Run(Connection1Synapse82* me);

#endif // CONNECTION1_SYNAPSE82_H_