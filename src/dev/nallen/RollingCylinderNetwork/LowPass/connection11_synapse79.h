#ifndef CONNECTION11_SYNAPSE79_H_
#define CONNECTION11_SYNAPSE79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse79 States
enum Connection11Synapse79States {
    CONNECTION11_SYNAPSE79_L,
};

// connection11_synapse79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse79States state;
} Connection11Synapse79;

// connection11_synapse79 Initialisation function
void Connection11Synapse79Init(Connection11Synapse79* me);

// connection11_synapse79 Execution function
void Connection11Synapse79Run(Connection11Synapse79* me);

#endif // CONNECTION11_SYNAPSE79_H_