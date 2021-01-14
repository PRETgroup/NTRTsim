#ifndef CONNECTION11_SYNAPSE50_H_
#define CONNECTION11_SYNAPSE50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse50 States
enum Connection11Synapse50States {
    CONNECTION11_SYNAPSE50_L,
};

// connection11_synapse50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse50States state;
} Connection11Synapse50;

// connection11_synapse50 Initialisation function
void Connection11Synapse50Init(Connection11Synapse50* me);

// connection11_synapse50 Execution function
void Connection11Synapse50Run(Connection11Synapse50* me);

#endif // CONNECTION11_SYNAPSE50_H_