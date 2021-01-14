#ifndef CONNECTION14_SYNAPSE84_H_
#define CONNECTION14_SYNAPSE84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse84 States
enum Connection14Synapse84States {
    CONNECTION14_SYNAPSE84_L,
};

// connection14_synapse84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse84States state;
} Connection14Synapse84;

// connection14_synapse84 Initialisation function
void Connection14Synapse84Init(Connection14Synapse84* me);

// connection14_synapse84 Execution function
void Connection14Synapse84Run(Connection14Synapse84* me);

#endif // CONNECTION14_SYNAPSE84_H_