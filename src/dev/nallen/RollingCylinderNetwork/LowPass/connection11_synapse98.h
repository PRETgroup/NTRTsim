#ifndef CONNECTION11_SYNAPSE98_H_
#define CONNECTION11_SYNAPSE98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse98 States
enum Connection11Synapse98States {
    CONNECTION11_SYNAPSE98_L,
};

// connection11_synapse98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse98States state;
} Connection11Synapse98;

// connection11_synapse98 Initialisation function
void Connection11Synapse98Init(Connection11Synapse98* me);

// connection11_synapse98 Execution function
void Connection11Synapse98Run(Connection11Synapse98* me);

#endif // CONNECTION11_SYNAPSE98_H_