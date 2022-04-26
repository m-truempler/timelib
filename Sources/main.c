/*
 * Tag des Jahres
 * Autor: Mike Trümpler
 * Datum: 15.3.2022
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#include "time.h"

int main() {
    int day = 0;
    int month = 0;
    int year = 0;
    int result = 0;

    printf("*** Tag des Jahres *** \n");

    do {
        input_date(&day, &month, &year);
    } while(exists_date(day, month, year) < 1);

    result = day_of_the_year(day, month, year);

    printf("Result: %d \n", result);
    return 0;
}

