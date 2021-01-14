#ifndef CONNECTION11_SYNAPSE25_H_
#define CONNECTION11_SYNAPSE25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse25 States
enum Connection11Synapse25States {
    CONNECTION11_SYNAPSE25_L,
};

// connection11_synapse25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse25States state;
} Connection11Synapse25;

// connection11_synapse25 Initialisation function
void Connection11Synapse25Init(Connection11Synapse25* me);

// connection11_synapse25 Execution function
void Connection11Synapse25Run(Connection11Synapse25* me);

#endif // CONNECTION11_SYNAPSE25_H_