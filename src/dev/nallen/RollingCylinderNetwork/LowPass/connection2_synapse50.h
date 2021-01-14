#ifndef CONNECTION2_SYNAPSE50_H_
#define CONNECTION2_SYNAPSE50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse50 States
enum Connection2Synapse50States {
    CONNECTION2_SYNAPSE50_L,
};

// connection2_synapse50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse50States state;
} Connection2Synapse50;

// connection2_synapse50 Initialisation function
void Connection2Synapse50Init(Connection2Synapse50* me);

// connection2_synapse50 Execution function
void Connection2Synapse50Run(Connection2Synapse50* me);

#endif // CONNECTION2_SYNAPSE50_H_