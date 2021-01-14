#ifndef CONNECTION11_SYNAPSE21_H_
#define CONNECTION11_SYNAPSE21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse21 States
enum Connection11Synapse21States {
    CONNECTION11_SYNAPSE21_L,
};

// connection11_synapse21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse21States state;
} Connection11Synapse21;

// connection11_synapse21 Initialisation function
void Connection11Synapse21Init(Connection11Synapse21* me);

// connection11_synapse21 Execution function
void Connection11Synapse21Run(Connection11Synapse21* me);

#endif // CONNECTION11_SYNAPSE21_H_