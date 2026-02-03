#pragma once

//--------------------------
// utils
#include "ofConstants.hpp"
#include "ofFileUtils.hpp"
#include "ofLog.hpp"
#include "ofSystemUtils.hpp"

#include "ofURLFileLoader.hpp"

#include "ofUtils.hpp"

#include "ofThread.hpp"
#include "ofThreadChannel.hpp"

#include "ofFpsCounter.hpp"
#include "ofJson.hpp"
#include "ofXml.hpp"

//--------------------------
// types
#include "ofColor.hpp"
#include "ofGraphicsBaseTypes.hpp"
#include "ofParameter.hpp"
#include "ofPoint.hpp"
#include "ofRectangle.hpp"
#include "ofTypes.hpp"

//--------------------------
// math
#include "ofMath.hpp"
#include "ofVectorMath.hpp"

//--------------------------
// communication
#if !defined(TARGET_OF_IOS) & !defined(TARGET_ANDROID) & !defined(TARGET_EMSCRIPTEN)
    #include "ofSerial.hpp"
    #include "ofArduino.hpp"
#endif

//--------------------------
// gl
#include "ofCubeMap.hpp"
#include "ofFbo.hpp"
#include "ofGLRenderer.hpp"
#include "ofGLUtils.hpp"
#include "ofLight.hpp"
#include "ofMaterial.hpp"
#include "ofShader.hpp"
#include "ofTexture.hpp"
#include "ofVbo.hpp"
#include "ofVboMesh.hpp"
// #include "ofGLProgrammableRenderer.hpp"
// #ifndef TARGET_PROGRAMMABLE_GL
//     #include "ofGLRenderer.hpp"
// #endif

//--------------------------
// graphics
#if !defined(TARGET_OF_IOS) & !defined(TARGET_ANDROID) & !defined(TARGET_EMSCRIPTEN)
    #include "ofCairoRenderer.hpp"
    #include "ofGraphicsCairo.hpp"
#endif
#include "ofGraphics.hpp"
#include "ofImage.hpp"
#include "ofPath.hpp"
#include "ofPixels.hpp"
#include "ofPolyline.hpp"
#include "ofRendererCollection.hpp"
#include "ofTessellator.hpp"
#include "ofTrueTypeFont.hpp"

//--------------------------
// app
#include "ofAppBaseWindow.hpp"
#include "ofAppRunner.hpp"
#include "ofBaseApp.hpp"
#include "ofMainLoop.hpp"
#include "ofWindowSettings.hpp"
#if !defined(TARGET_OF_IOS) & !defined(TARGET_ANDROID) & !defined(TARGET_EMSCRIPTEN) & !defined(TARGET_RASPBERRY_PI_LEGACY)
    #include "ofAppGLFWWindow.hpp"
//    #if !defined(TARGET_LINUX_ARM)
//        #include "ofAppGlutWindow.hpp"
//    #endif
#endif

//--------------------------
// audio
#ifndef TARGET_NO_SOUND
    #include "ofSoundStream.hpp"
    #include "ofSoundPlayer.hpp"
    #include "ofSoundBuffer.hpp"
#endif

//--------------------------
// video
#include "ofVideoGrabber.hpp"
#include "ofVideoPlayer.hpp"

//--------------------------
// events
#include "ofEvents.hpp"

//--------------------------
// 3d
#include "of3dUtils.hpp"
#include "ofCamera.hpp"
#include "ofEasyCam.hpp"
#include "ofMesh.hpp"
#include "ofNode.hpp"

//--------------------------
#ifdef OF_LEGACY_INCLUDE_STD
using namespace std;
#else

// this will eventually be disabled by default
#define OF_USE_MINIMAL_STD
    #ifdef OF_USE_MINIMAL_STD
using std::cout;
using std::deque;
using std::endl;
using std::make_shared;
using std::map;
using std::max;
using std::pair;
using std::shared_ptr;
using std::string;
using std::stringstream;
using std::swap;
using std::to_string;
using std::vector;
using std::weak_ptr;
    #endif
#endif


// core: ---------------------------
#include <stdint.h>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>
#include <vector>
#include <memory>
#include <functional>
