#ifndef CONNECTION11_SYNAPSE39_H_
#define CONNECTION11_SYNAPSE39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse39 States
enum Connection11Synapse39States {
    CONNECTION11_SYNAPSE39_L,
};

// connection11_synapse39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse39States state;
} Connection11Synapse39;

// connection11_synapse39 Initialisation function
void Connection11Synapse39Init(Connection11Synapse39* me);

// connection11_synapse39 Execution function
void Connection11Synapse39Run(Connection11Synapse39* me);

#endif // CONNECTION11_SYNAPSE39_H_