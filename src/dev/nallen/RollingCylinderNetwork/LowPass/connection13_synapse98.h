#ifndef CONNECTION13_SYNAPSE98_H_
#define CONNECTION13_SYNAPSE98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse98 States
enum Connection13Synapse98States {
    CONNECTION13_SYNAPSE98_L,
};

// connection13_synapse98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse98States state;
} Connection13Synapse98;

// connection13_synapse98 Initialisation function
void Connection13Synapse98Init(Connection13Synapse98* me);

// connection13_synapse98 Execution function
void Connection13Synapse98Run(Connection13Synapse98* me);

#endif // CONNECTION13_SYNAPSE98_H_