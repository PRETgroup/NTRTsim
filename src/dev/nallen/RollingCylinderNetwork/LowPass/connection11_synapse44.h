#ifndef CONNECTION11_SYNAPSE44_H_
#define CONNECTION11_SYNAPSE44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse44 States
enum Connection11Synapse44States {
    CONNECTION11_SYNAPSE44_L,
};

// connection11_synapse44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse44States state;
} Connection11Synapse44;

// connection11_synapse44 Initialisation function
void Connection11Synapse44Init(Connection11Synapse44* me);

// connection11_synapse44 Execution function
void Connection11Synapse44Run(Connection11Synapse44* me);

#endif // CONNECTION11_SYNAPSE44_H_