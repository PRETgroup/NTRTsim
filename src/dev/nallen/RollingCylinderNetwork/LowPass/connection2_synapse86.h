#ifndef CONNECTION2_SYNAPSE86_H_
#define CONNECTION2_SYNAPSE86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse86 States
enum Connection2Synapse86States {
    CONNECTION2_SYNAPSE86_L,
};

// connection2_synapse86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse86States state;
} Connection2Synapse86;

// connection2_synapse86 Initialisation function
void Connection2Synapse86Init(Connection2Synapse86* me);

// connection2_synapse86 Execution function
void Connection2Synapse86Run(Connection2Synapse86* me);

#endif // CONNECTION2_SYNAPSE86_H_