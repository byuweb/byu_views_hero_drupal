# BYU Views Hero

This module creates a view which implements the different displays of the BYU hero component.

## Usage

To use this module, you will need the views module. Then you will need to create a new view. With that view you will need to change the display style to "BYU Hero." Then in the settings of that display style you will be able to map the fields of your content type to the various parts of the BYU Hero Banner. There are five different display styles of the BYU Hero Banner component itself. Two of these styles have sub-styles. More on that below.

## Banner Styles

* Title Only - Only displays the title and image/video source. Used for headlines.
* Video Hero - Gives support for embedded video.
* Side Image - Displays an image on the left.
  * Image Style 2 - An alternate side image view. Also can be used to embed videos.
* Transparent Overlay - Puts the image in the background with a transparent block holding the other parts of the banner on the left.
  * Right Aligned - Right aligns the transparent overlay.
* Full Screen - Displays the image in the background, and stretches the transparent overlay to fit the width of the viewport.
  * Light Image - Adjusts the formatting for bright-colored images.
  * Dark Image - Adjusts the formatting for dark-colored images.

Demos for these banners are found here: https://cdn.byu.edu/byu-hero-banner/1.x.x/demo/index.html

### Ideal Image Sizes

* Title Only - Width: Viewport width, Height: 280px
* Video Hero, Transparent Overlay, Full Screen - Width: Viewport width, Height: 680px
* Side Image - Width: 570px, Height: 320px