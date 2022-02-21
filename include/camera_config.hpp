#pragma once

#define CAM_MODE    6
#define CAM_WIDTH   1280
#define CAM_HEIGHT  720
#define CAM_FPS     90

#define MSG_WIDTH   640
#define MSG_HEIGHT  480

const float scale_width  = (float)MSG_WIDTH/(float)CAM_WIDTH;
const float scale_height = (float)MSG_HEIGHT/(float)CAM_HEIGHT;