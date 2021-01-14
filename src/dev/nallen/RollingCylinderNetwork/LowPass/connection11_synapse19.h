#ifndef CONNECTION11_SYNAPSE19_H_
#define CONNECTION11_SYNAPSE19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse19 States
enum Connection11Synapse19States {
    CONNECTION11_SYNAPSE19_L,
};

// connection11_synapse19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse19States state;
} Connection11Synapse19;

// connection11_synapse19 Initialisation function
void Connection11Synapse19Init(Connection11Synapse19* me);

// connection11_synapse19 Execution function
void Connection11Synapse19Run(Connection11Synapse19* me);

#endif // CONNECTION11_SYNAPSE19_H_