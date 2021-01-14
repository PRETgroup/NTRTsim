#ifndef CONNECTION13_SYNAPSE96_H_
#define CONNECTION13_SYNAPSE96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse96 States
enum Connection13Synapse96States {
    CONNECTION13_SYNAPSE96_L,
};

// connection13_synapse96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse96States state;
} Connection13Synapse96;

// connection13_synapse96 Initialisation function
void Connection13Synapse96Init(Connection13Synapse96* me);

// connection13_synapse96 Execution function
void Connection13Synapse96Run(Connection13Synapse96* me);

#endif // CONNECTION13_SYNAPSE96_H_