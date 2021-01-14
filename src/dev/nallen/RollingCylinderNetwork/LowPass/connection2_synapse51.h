#ifndef CONNECTION2_SYNAPSE51_H_
#define CONNECTION2_SYNAPSE51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse51 States
enum Connection2Synapse51States {
    CONNECTION2_SYNAPSE51_L,
};

// connection2_synapse51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse51States state;
} Connection2Synapse51;

// connection2_synapse51 Initialisation function
void Connection2Synapse51Init(Connection2Synapse51* me);

// connection2_synapse51 Execution function
void Connection2Synapse51Run(Connection2Synapse51* me);

#endif // CONNECTION2_SYNAPSE51_H_