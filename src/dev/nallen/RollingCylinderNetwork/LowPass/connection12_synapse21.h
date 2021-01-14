#ifndef CONNECTION12_SYNAPSE21_H_
#define CONNECTION12_SYNAPSE21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse21 States
enum Connection12Synapse21States {
    CONNECTION12_SYNAPSE21_L,
};

// connection12_synapse21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse21States state;
} Connection12Synapse21;

// connection12_synapse21 Initialisation function
void Connection12Synapse21Init(Connection12Synapse21* me);

// connection12_synapse21 Execution function
void Connection12Synapse21Run(Connection12Synapse21* me);

#endif // CONNECTION12_SYNAPSE21_H_