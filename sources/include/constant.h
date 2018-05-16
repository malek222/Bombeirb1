/*******************************************************************************
 * This file is part of Bombeirb.
 * Copyright (C) 2018 by Laurent Réveillère
 ******************************************************************************/
#ifndef CONSTANT_H_
#define CONSTANT_H_

#define WINDOW_NAME "[PG110] Bombeirb 2017-2018"

// Size (# of pixels) of a cell of the map
#define SIZE_BLOC       40

// Size (# of pixels) of banner
#define LINE_HEIGHT	4
#define BANNER_HEIGHT	40

// Time management
#define DEFAULT_GAME_FPS 30

// map size
#define STATIC_MAP_WIDTH  12
#define STATIC_MAP_HEIGHT 12

enum direction {
	NORTH = 0,
	SOUTH, // 1
	WEST, // 2
	EAST //3
};



#endif /* CONSTANT */
