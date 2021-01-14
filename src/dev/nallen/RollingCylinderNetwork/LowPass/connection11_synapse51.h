#ifndef CONNECTION11_SYNAPSE51_H_
#define CONNECTION11_SYNAPSE51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse51 States
enum Connection11Synapse51States {
    CONNECTION11_SYNAPSE51_L,
};

// connection11_synapse51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse51States state;
} Connection11Synapse51;

// connection11_synapse51 Initialisation function
void Connection11Synapse51Init(Connection11Synapse51* me);

// connection11_synapse51 Execution function
void Connection11Synapse51Run(Connection11Synapse51* me);

#endif // CONNECTION11_SYNAPSE51_H_