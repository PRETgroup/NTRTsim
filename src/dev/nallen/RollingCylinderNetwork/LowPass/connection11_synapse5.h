#ifndef CONNECTION11_SYNAPSE5_H_
#define CONNECTION11_SYNAPSE5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse5 States
enum Connection11Synapse5States {
    CONNECTION11_SYNAPSE5_L,
};

// connection11_synapse5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse5States state;
} Connection11Synapse5;

// connection11_synapse5 Initialisation function
void Connection11Synapse5Init(Connection11Synapse5* me);

// connection11_synapse5 Execution function
void Connection11Synapse5Run(Connection11Synapse5* me);

#endif // CONNECTION11_SYNAPSE5_H_