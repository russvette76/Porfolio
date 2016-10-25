/*
 * Classifiyer.cpp
 *
 *  Created on: Oct 22, 2016
 *      Author: mine
 */

#include "Classifiyer.h"

Classifiyer::Classifiyer() {
	// TODO Auto-generated constructor stub
	m_CurrClassifierHandle = -1;
	ReadClassifierLIB();
}

Classifiyer::~Classifiyer() {
	// TODO Auto-generated destructor stub
}

int Classifiyer::ReadClassifierLIB()
{
	int returnCode = -1;
	int readInClassifierHandle = -1;
	m_CurrClassifierHandle = readInClassifierHandle;
	return returnCode;
}

int Classifiyer::ClassifyReagentBox(unsigned char **inScaledImg,ROI &reagentROI, float &outreagentVal)
{
	int returnCode = -1;
	//using the m_CurrClassifierHandle, classify the clor box
	//
	return returnCode;
}
