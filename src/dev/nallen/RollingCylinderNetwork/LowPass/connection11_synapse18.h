#ifndef CONNECTION11_SYNAPSE18_H_
#define CONNECTION11_SYNAPSE18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse18 States
enum Connection11Synapse18States {
    CONNECTION11_SYNAPSE18_L,
};

// connection11_synapse18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse18States state;
} Connection11Synapse18;

// connection11_synapse18 Initialisation function
void Connection11Synapse18Init(Connection11Synapse18* me);

// connection11_synapse18 Execution function
void Connection11Synapse18Run(Connection11Synapse18* me);

#endif // CONNECTION11_SYNAPSE18_H_