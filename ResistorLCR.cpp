/*****************************************************************************
 * File name: ResistorLCR.cpp
 *
 * Programmer: Byron Austin
 *
 * Date: 03/03/2012
 *
 * Description: implementation file for Resitor class with 3 attributes:
 *  1. Name (string)
 *	2. Nominal value (any real number, so double)
 *	3. Tolerance as a percentage (any real number, so double)
 *
 * *************************************************************************/

#include "ResistorLCR.h"
#include <iostream>
using namespace std;

/*** Constructors ***/
// 0-argument (default) constructor
ResistorLCR::ResistorLCR( )
{
	nominalR = 0;
	tolerance = 0;
}

// Paramaterized constructor
ResistorLCR::ResistorLCR(double nominalValue, double toleranceValue)
{
	nominalR = nominalValue;
	tolerance = toleranceValue;
}

/*** Accessor get methods ***/
double ResistorLCR::getNominalResistance(void) const
{
	return nominalR;
}

double ResistorLCR::getTolerance(void) const
{
	return tolerance;
}

// Get maximum resistance
double ResistorLCR::maximumR(void) const
{
	return nominalR * (1 + tolerance/100);
}

// Get minimum resistance
double ResistorLCR::minimumR(void) const
{
	return nominalR * (1 - tolerance/100);
}

/*** Mutator set methods ***/
void ResistorLCR::setNominalResistance(double nominalValue)
{
	nominalR = nominalValue;
}

// Tolerance set/mutator function
void ResistorLCR::setTolerance(double toleranceValue)
{
	tolerance = toleranceValue;
}


