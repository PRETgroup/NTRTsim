#ifndef CONNECTION11_SYNAPSE54_H_
#define CONNECTION11_SYNAPSE54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse54 States
enum Connection11Synapse54States {
    CONNECTION11_SYNAPSE54_L,
};

// connection11_synapse54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse54States state;
} Connection11Synapse54;

// connection11_synapse54 Initialisation function
void Connection11Synapse54Init(Connection11Synapse54* me);

// connection11_synapse54 Execution function
void Connection11Synapse54Run(Connection11Synapse54* me);

#endif // CONNECTION11_SYNAPSE54_H_