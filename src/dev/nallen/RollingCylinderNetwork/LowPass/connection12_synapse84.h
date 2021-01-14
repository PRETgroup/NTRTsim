#ifndef CONNECTION12_SYNAPSE84_H_
#define CONNECTION12_SYNAPSE84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse84 States
enum Connection12Synapse84States {
    CONNECTION12_SYNAPSE84_L,
};

// connection12_synapse84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse84States state;
} Connection12Synapse84;

// connection12_synapse84 Initialisation function
void Connection12Synapse84Init(Connection12Synapse84* me);

// connection12_synapse84 Execution function
void Connection12Synapse84Run(Connection12Synapse84* me);

#endif // CONNECTION12_SYNAPSE84_H_