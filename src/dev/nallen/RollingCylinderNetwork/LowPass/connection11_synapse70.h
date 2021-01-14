#ifndef CONNECTION11_SYNAPSE70_H_
#define CONNECTION11_SYNAPSE70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse70 States
enum Connection11Synapse70States {
    CONNECTION11_SYNAPSE70_L,
};

// connection11_synapse70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse70States state;
} Connection11Synapse70;

// connection11_synapse70 Initialisation function
void Connection11Synapse70Init(Connection11Synapse70* me);

// connection11_synapse70 Execution function
void Connection11Synapse70Run(Connection11Synapse70* me);

#endif // CONNECTION11_SYNAPSE70_H_