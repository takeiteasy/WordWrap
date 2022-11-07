//
//  MenuScene.h
//  word_warp
//
//  Created by George Watson on 27/03/2020.
//  Copyright © 2020 George Watson. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "Button.h"
#import "Settings.h"

@interface MenuScene : SKScene {
  SKSpriteNode *logo, *timed_unselected, *timed_selected, *trophy;
  Button *easy, *normal, *hard;
  SKAudioNode *bg_music;
  BOOL enable_timed;
  GameSettings* settings;
}
@end
