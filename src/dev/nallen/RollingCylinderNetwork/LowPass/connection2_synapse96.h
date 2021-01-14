#ifndef CONNECTION2_SYNAPSE96_H_
#define CONNECTION2_SYNAPSE96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse96 States
enum Connection2Synapse96States {
    CONNECTION2_SYNAPSE96_L,
};

// connection2_synapse96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse96States state;
} Connection2Synapse96;

// connection2_synapse96 Initialisation function
void Connection2Synapse96Init(Connection2Synapse96* me);

// connection2_synapse96 Execution function
void Connection2Synapse96Run(Connection2Synapse96* me);

#endif // CONNECTION2_SYNAPSE96_H_