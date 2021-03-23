#ifndef STRINGS_CONN_SYNAPSE227_H_
#define STRINGS_CONN_SYNAPSE227_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_conn_synapse227 States
enum StringsConnSynapse227States {
    STRINGS_CONN_SYNAPSE227_L,
};

// strings_conn_synapse227 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum StringsConnSynapse227States state;
} StringsConnSynapse227;

// strings_conn_synapse227 Initialisation function
void StringsConnSynapse227Init(StringsConnSynapse227* me);

// strings_conn_synapse227 Execution function
void StringsConnSynapse227Run(StringsConnSynapse227* me);

#endif // STRINGS_CONN_SYNAPSE227_H_