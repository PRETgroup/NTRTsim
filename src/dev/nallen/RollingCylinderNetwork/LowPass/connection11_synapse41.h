#ifndef CONNECTION11_SYNAPSE41_H_
#define CONNECTION11_SYNAPSE41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse41 States
enum Connection11Synapse41States {
    CONNECTION11_SYNAPSE41_L,
};

// connection11_synapse41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse41States state;
} Connection11Synapse41;

// connection11_synapse41 Initialisation function
void Connection11Synapse41Init(Connection11Synapse41* me);

// connection11_synapse41 Execution function
void Connection11Synapse41Run(Connection11Synapse41* me);

#endif // CONNECTION11_SYNAPSE41_H_