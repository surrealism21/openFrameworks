#include "ofVec2f.hpp"
#include "ofVec3f.hpp"
#include "ofVec4f.hpp"

ofVec2f::ofVec2f( const ofVec3f& vec ) {
	x = vec.x;
	y = vec.y;
}

ofVec2f::ofVec2f( const ofVec4f& vec ) {
	x = vec.x;
	y = vec.y;
}
