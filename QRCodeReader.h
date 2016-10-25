/*
 * QRCodeReader.h
 *
 *  Created on: Oct 23, 2016
 *      Author: mine
 */

#ifndef QRCODEREADER_H_
#define QRCODEREADER_H_
#include "ROI.h"

class QRCodeReader {
public:
	QRCodeReader();
	virtual ~QRCodeReader();
	int ReadQRCode(unsigned char **InOrigImg, ROI &inQRRoi, long &outSerielNumber);

};
#endif /* QRCODEREADER_H_ */
