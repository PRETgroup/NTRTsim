#ifndef CONNECTION11_SYNAPSE89_H_
#define CONNECTION11_SYNAPSE89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse89 States
enum Connection11Synapse89States {
    CONNECTION11_SYNAPSE89_L,
};

// connection11_synapse89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse89States state;
} Connection11Synapse89;

// connection11_synapse89 Initialisation function
void Connection11Synapse89Init(Connection11Synapse89* me);

// connection11_synapse89 Execution function
void Connection11Synapse89Run(Connection11Synapse89* me);

#endif // CONNECTION11_SYNAPSE89_H_