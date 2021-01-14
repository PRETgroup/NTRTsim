#ifndef CONNECTION2_SYNAPSE35_H_
#define CONNECTION2_SYNAPSE35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse35 States
enum Connection2Synapse35States {
    CONNECTION2_SYNAPSE35_L,
};

// connection2_synapse35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse35States state;
} Connection2Synapse35;

// connection2_synapse35 Initialisation function
void Connection2Synapse35Init(Connection2Synapse35* me);

// connection2_synapse35 Execution function
void Connection2Synapse35Run(Connection2Synapse35* me);

#endif // CONNECTION2_SYNAPSE35_H_