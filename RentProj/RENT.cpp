#include "RENT.h"

Rent::Rent(double tid, double rent, double utilities, double att, double pge, double sfarm)
{
	i_tid = tid;
	i_rent = rent;
	i_utilities = utilities;
	i_att = att;
	i_pge = pge;
	i_sfarm = sfarm;
}

double Rent::CalculateRent()
{
	double calculatedRent = i_tid + i_rent + i_utilities + i_att + i_pge + i_sfarm;
	return calculatedRent;
}