#ifndef CONNECTION11_SYNAPSE84_H_
#define CONNECTION11_SYNAPSE84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse84 States
enum Connection11Synapse84States {
    CONNECTION11_SYNAPSE84_L,
};

// connection11_synapse84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse84States state;
} Connection11Synapse84;

// connection11_synapse84 Initialisation function
void Connection11Synapse84Init(Connection11Synapse84* me);

// connection11_synapse84 Execution function
void Connection11Synapse84Run(Connection11Synapse84* me);

#endif // CONNECTION11_SYNAPSE84_H_