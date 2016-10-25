/*
 * Camera.h
 *
 *  Created on: Oct 22, 2016
 *      Author: mine
 */

#ifndef CAMERA_H_
#define CAMERA_H_

class Camera {
public:

	Camera();
	virtual ~Camera();
	void GetImage(unsigned char **OutOrigImagePointer);
	void GetImageSize(int &width, int &height);


};

#endif /* CAMERA_H_ */
