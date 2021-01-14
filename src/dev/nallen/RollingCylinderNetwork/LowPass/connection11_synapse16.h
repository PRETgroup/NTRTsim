#ifndef CONNECTION11_SYNAPSE16_H_
#define CONNECTION11_SYNAPSE16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse16 States
enum Connection11Synapse16States {
    CONNECTION11_SYNAPSE16_L,
};

// connection11_synapse16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse16States state;
} Connection11Synapse16;

// connection11_synapse16 Initialisation function
void Connection11Synapse16Init(Connection11Synapse16* me);

// connection11_synapse16 Execution function
void Connection11Synapse16Run(Connection11Synapse16* me);

#endif // CONNECTION11_SYNAPSE16_H_