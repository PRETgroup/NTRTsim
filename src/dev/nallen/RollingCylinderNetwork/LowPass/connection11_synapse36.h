#ifndef CONNECTION11_SYNAPSE36_H_
#define CONNECTION11_SYNAPSE36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse36 States
enum Connection11Synapse36States {
    CONNECTION11_SYNAPSE36_L,
};

// connection11_synapse36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse36States state;
} Connection11Synapse36;

// connection11_synapse36 Initialisation function
void Connection11Synapse36Init(Connection11Synapse36* me);

// connection11_synapse36 Execution function
void Connection11Synapse36Run(Connection11Synapse36* me);

#endif // CONNECTION11_SYNAPSE36_H_