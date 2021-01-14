#ifndef CONNECTION13_SYNAPSE21_H_
#define CONNECTION13_SYNAPSE21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse21 States
enum Connection13Synapse21States {
    CONNECTION13_SYNAPSE21_L,
};

// connection13_synapse21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse21States state;
} Connection13Synapse21;

// connection13_synapse21 Initialisation function
void Connection13Synapse21Init(Connection13Synapse21* me);

// connection13_synapse21 Execution function
void Connection13Synapse21Run(Connection13Synapse21* me);

#endif // CONNECTION13_SYNAPSE21_H_