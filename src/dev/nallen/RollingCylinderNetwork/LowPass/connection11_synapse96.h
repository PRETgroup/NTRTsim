#ifndef CONNECTION11_SYNAPSE96_H_
#define CONNECTION11_SYNAPSE96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse96 States
enum Connection11Synapse96States {
    CONNECTION11_SYNAPSE96_L,
};

// connection11_synapse96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse96States state;
} Connection11Synapse96;

// connection11_synapse96 Initialisation function
void Connection11Synapse96Init(Connection11Synapse96* me);

// connection11_synapse96 Execution function
void Connection11Synapse96Run(Connection11Synapse96* me);

#endif // CONNECTION11_SYNAPSE96_H_