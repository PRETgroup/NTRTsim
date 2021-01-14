#ifndef CONNECTION11_SYNAPSE88_H_
#define CONNECTION11_SYNAPSE88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse88 States
enum Connection11Synapse88States {
    CONNECTION11_SYNAPSE88_L,
};

// connection11_synapse88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse88States state;
} Connection11Synapse88;

// connection11_synapse88 Initialisation function
void Connection11Synapse88Init(Connection11Synapse88* me);

// connection11_synapse88 Execution function
void Connection11Synapse88Run(Connection11Synapse88* me);

#endif // CONNECTION11_SYNAPSE88_H_