#ifndef CONNECTION2_SYNAPSE37_H_
#define CONNECTION2_SYNAPSE37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse37 States
enum Connection2Synapse37States {
    CONNECTION2_SYNAPSE37_L,
};

// connection2_synapse37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse37States state;
} Connection2Synapse37;

// connection2_synapse37 Initialisation function
void Connection2Synapse37Init(Connection2Synapse37* me);

// connection2_synapse37 Execution function
void Connection2Synapse37Run(Connection2Synapse37* me);

#endif // CONNECTION2_SYNAPSE37_H_