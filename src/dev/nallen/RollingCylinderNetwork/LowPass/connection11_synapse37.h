#ifndef CONNECTION11_SYNAPSE37_H_
#define CONNECTION11_SYNAPSE37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse37 States
enum Connection11Synapse37States {
    CONNECTION11_SYNAPSE37_L,
};

// connection11_synapse37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse37States state;
} Connection11Synapse37;

// connection11_synapse37 Initialisation function
void Connection11Synapse37Init(Connection11Synapse37* me);

// connection11_synapse37 Execution function
void Connection11Synapse37Run(Connection11Synapse37* me);

#endif // CONNECTION11_SYNAPSE37_H_