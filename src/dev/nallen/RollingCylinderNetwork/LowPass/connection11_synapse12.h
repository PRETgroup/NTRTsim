#ifndef CONNECTION11_SYNAPSE12_H_
#define CONNECTION11_SYNAPSE12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse12 States
enum Connection11Synapse12States {
    CONNECTION11_SYNAPSE12_L,
};

// connection11_synapse12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse12States state;
} Connection11Synapse12;

// connection11_synapse12 Initialisation function
void Connection11Synapse12Init(Connection11Synapse12* me);

// connection11_synapse12 Execution function
void Connection11Synapse12Run(Connection11Synapse12* me);

#endif // CONNECTION11_SYNAPSE12_H_