#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <direct.h>
#include <stdlib.h>
#include <irrlicht.h>

#include "main.h"

using namespace std;
using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

bool ini = true;

void viewer()
{
    IrrlichtDevice *device =
		createDevice( video::EDT_OPENGL, dimension3d<u32>(800, 600), 32,
			false, false, false, 0); //Create a window in 800x600 pixels and in OpenGL Mode (windowed)
	if (!device) { //If device not found
		return 1; //Close
	}
	device->setWindowCaption(L"Viewer"); //Title Caption
	while(device->run())
	{
	    driver->beginScene(true, true, SColor(255,0,0,0)); //BRGB (Bright, Red, Green, Blue)
		smgr->drawAll(); //Draw all that stuff
		guienv->drawAll(); //Draw all that stuff
		driver->endScene(); //Ending of scene
	}
	device->drop(); //Drop current device
	return 0;
}

void program() {

}

int main()
{
    if(ini == true) {
        //If all is good that should be work
        program();
    } else {
        MessageBox(NULL,"Error - Cannot initialize program.","Error",MB_OK | MB_ICONEXCLAMATION); //Error message
    }
    return 0;
}
