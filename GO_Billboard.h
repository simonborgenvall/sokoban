//
//  Billboard.h
//  OpenGLGLUTApp
//
//  Created by Simon Borgenvall on 2013-05-01.
//
//

#ifndef __OpenGLGLUTApp__Billboard__
#define __OpenGLGLUTApp__Billboard__

#include <iostream>
#include "GameObject.h"
#include "CameraManager.h"

class GO_Billboard : public GameObject
{
public:
	GO_Billboard(vec3 pos, std::string texture);
	~GO_Billboard() {}
	std::string getType();
	
	virtual int update_function(unsigned int time);
	
    virtual int render(GLuint program_reference_id);
	
protected:
	
private:
	
};

#endif /* defined(__OpenGLGLUTApp__Billboard__) */
