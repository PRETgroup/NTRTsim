#ifndef CONNECTION11_SYNAPSE78_H_
#define CONNECTION11_SYNAPSE78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse78 States
enum Connection11Synapse78States {
    CONNECTION11_SYNAPSE78_L,
};

// connection11_synapse78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse78States state;
} Connection11Synapse78;

// connection11_synapse78 Initialisation function
void Connection11Synapse78Init(Connection11Synapse78* me);

// connection11_synapse78 Execution function
void Connection11Synapse78Run(Connection11Synapse78* me);

#endif // CONNECTION11_SYNAPSE78_H_