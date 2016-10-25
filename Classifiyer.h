/*
 * Classifiyer.h
 *
 *  Created on: Oct 22, 2016
 *      Author: mine
 */

#ifndef CLASSIFIYER_H_
#define CLASSIFIYER_H_

#include "ROI.h"

class Classifiyer {
public:
	Classifiyer();
	virtual ~Classifiyer();
	int ReadClassifierLIB();
	int ClassifyReagentBox(unsigned char **inScaledImg,ROI &reagentROI, float &outreagentVal);
private:
	int m_CurrClassifierHandle;
};

#endif /* CLASSIFIYER_H_ */
