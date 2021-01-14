#ifndef CONNECTION13_SYNAPSE37_H_
#define CONNECTION13_SYNAPSE37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse37 States
enum Connection13Synapse37States {
    CONNECTION13_SYNAPSE37_L,
};

// connection13_synapse37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse37States state;
} Connection13Synapse37;

// connection13_synapse37 Initialisation function
void Connection13Synapse37Init(Connection13Synapse37* me);

// connection13_synapse37 Execution function
void Connection13Synapse37Run(Connection13Synapse37* me);

#endif // CONNECTION13_SYNAPSE37_H_