#ifndef CONNECTION6_SYNAPSE84_H_
#define CONNECTION6_SYNAPSE84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse84 States
enum Connection6Synapse84States {
    CONNECTION6_SYNAPSE84_L,
};

// connection6_synapse84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse84States state;
} Connection6Synapse84;

// connection6_synapse84 Initialisation function
void Connection6Synapse84Init(Connection6Synapse84* me);

// connection6_synapse84 Execution function
void Connection6Synapse84Run(Connection6Synapse84* me);

#endif // CONNECTION6_SYNAPSE84_H_