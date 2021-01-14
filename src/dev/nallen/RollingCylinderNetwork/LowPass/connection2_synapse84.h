#ifndef CONNECTION2_SYNAPSE84_H_
#define CONNECTION2_SYNAPSE84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse84 States
enum Connection2Synapse84States {
    CONNECTION2_SYNAPSE84_L,
};

// connection2_synapse84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse84States state;
} Connection2Synapse84;

// connection2_synapse84 Initialisation function
void Connection2Synapse84Init(Connection2Synapse84* me);

// connection2_synapse84 Execution function
void Connection2Synapse84Run(Connection2Synapse84* me);

#endif // CONNECTION2_SYNAPSE84_H_