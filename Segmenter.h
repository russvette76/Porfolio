/*
 * Segmenter.h
 *
 *  Created on: Oct 22, 2016
 *      Author: mine
 */

#ifndef SEGMENTER_H_
#define SEGMENTER_H_
#include "ROI.h"
#include <vector>

using namespace std;
class Segmenter {
public:
	Segmenter();
	virtual ~Segmenter();
	int FindQRCode(unsigned char **InOrigImg, ROI &outQRROI);
	int FindColorChart(unsigned char **InOrigImg, ROI &outColorChartROI );
	int FindReagentBoxes(unsigned char **InOrigImg, vector<ROI> &outReagentBoxesROI);
};

#endif /* SEGMENTER_H_ */
