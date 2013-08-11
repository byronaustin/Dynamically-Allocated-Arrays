/*****************************************************************************
 * File name: ResistorLCR.h
 *
 * Programmer: Byron Austin
 *
 * Date: 03/17/2012
 *
 * Description: header file to define a Resistor class with two attributes:
 *  1. Nominal value (any real number, so double)
 *	2. Tolerance as a percentage (any real number, so double)
 *
 * *************************************************************************/

#ifndef RESISTORLCR_H
#define RESISTORLCR_H

#include <string>
using namespace std;

class ResistorLCR
{
private:
	// Nominal resistance value (any real number)
	double nominalR;

	// Tolerance value as a percent (any real number)
	double tolerance;

public:
	/*** Constructors ***/
	// 0-argument (default) constructor
	ResistorLCR( );
	// Paramaterized constructor
	ResistorLCR(double nominalValue, double toleranceValue);

	/*** Accessor get methods ***/
	// Nominal resistance get/accessor function
	double getNominalResistance(void) const;

	// Tolerance get/accessor function
	double getTolerance(void) const;

	// Get maximum resistance
	double maximumR(void) const;

	// Get minimum resistance
	double minimumR(void) const;

	/*** Mutator set methods ***/
	// Nominal resistance set/mutator function
	void setNominalResistance(double nominalValue);

	// Tolerance set/mutator function
	void setTolerance(double toleranceValue);
};

#endif
