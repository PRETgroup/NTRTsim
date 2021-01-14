#ifndef CONNECTION11_SYNAPSE30_H_
#define CONNECTION11_SYNAPSE30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse30 States
enum Connection11Synapse30States {
    CONNECTION11_SYNAPSE30_L,
};

// connection11_synapse30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse30States state;
} Connection11Synapse30;

// connection11_synapse30 Initialisation function
void Connection11Synapse30Init(Connection11Synapse30* me);

// connection11_synapse30 Execution function
void Connection11Synapse30Run(Connection11Synapse30* me);

#endif // CONNECTION11_SYNAPSE30_H_