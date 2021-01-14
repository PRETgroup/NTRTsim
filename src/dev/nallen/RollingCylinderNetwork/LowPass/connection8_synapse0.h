#ifndef CONNECTION8_SYNAPSE0_H_
#define CONNECTION8_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection8_synapse0 States
enum Connection8Synapse0States {
    CONNECTION8_SYNAPSE0_L,
};

// connection8_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection8Synapse0States state;
} Connection8Synapse0;

// connection8_synapse0 Initialisation function
void Connection8Synapse0Init(Connection8Synapse0* me);

// connection8_synapse0 Execution function
void Connection8Synapse0Run(Connection8Synapse0* me);

#endif // CONNECTION8_SYNAPSE0_H_