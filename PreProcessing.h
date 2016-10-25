/*
 * PreProcessing.h
 *
 *  Created on: Oct 22, 2016
 *      Author: mine
 */

#ifndef PREPROCESSING_H_
#define PREPROCESSING_H_

class PreProcessing {
public:

	PreProcessing();
	virtual ~PreProcessing();
	int enhanceContrast(unsigned char **inOrigImg, unsigned char **outEnhancedImg);
	int scaleColor(unsigned char **inOrigImg, unsigned char **outScaledImg);




};

#endif /* PREPROCESSING_H_ */
