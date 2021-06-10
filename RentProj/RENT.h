#pragma once
#ifndef RENT_H
#define RENT_H

class Rent
{
private:
	double i_tid, i_rent, i_utilities, i_att, i_pge, i_sfarm;

public:

	Rent(double tid, double rent, double util, double att, double pge, double sfarm);

	double CalculateRent();

	double getTID() { return i_tid; }
	double getRent() { return i_rent; }
	double getUtilities() { return i_utilities; }
	double getATT() { return i_att; }
	double getPGE() { return i_pge; }
	double getSfarm() { return i_sfarm; }
};

#endif