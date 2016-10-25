//============================================================================
// Name        : PixE.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Camera.h"
#include "PreProcessing.h"
#include "Segmenter.h"
#include "Classifiyer.h"
#include "QRCodeReader.h"

using namespace std;

int main() {

	Camera iPhoneCamera;
	PreProcessing PreProc;
	Segmenter Segment;
	QRCodeReader QRReader;
	Classifiyer Classifier;
	ROI colorChartROI;
	ROI QRcodeROI;
	long serielNumber = 0;


	int width = 0;
	int height = 0;
	iPhoneCamera.GetImageSize(width,height);

	unsigned char* bufferOriginal = new unsigned char[width*height];
	unsigned char* bufferEnhanced = new unsigned char[width*height];
	unsigned char* bufferScaled = new unsigned char[width*height];

	iPhoneCamera.GetImage(&bufferOriginal);

	//Preprocess Image
	PreProc.enhanceContrast(&bufferOriginal,&bufferEnhanced);

	//Find the color chart and scale image to normalize colors
	Segment.FindColorChart(&bufferEnhanced, colorChartROI);
	PreProc.scaleColor(&bufferOriginal,&bufferScaled);

	//Find and decode QR code
	Segment.FindQRCode(&bufferEnhanced,QRcodeROI);
	QRReader.ReadQRCode(&bufferEnhanced,QRcodeROI,serielNumber);

	//find reagent boxes and classify colors
	vector<ROI> reagentBoxsROIs;
	Segment.FindReagentBoxes(&bufferEnhanced,reagentBoxsROIs);

	for(int i = 0; i != int(reagentBoxsROIs.size()); i++)
	{
		float reagentValue = -1.0f;
		Classifier.ClassifyReagentBox(&bufferScaled,reagentBoxsROIs[i],reagentValue);

		cout << "Reagent: " << i << " Hass a value of: " << reagentValue <<"\n";


	}

	return 0;
}
