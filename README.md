# BYU Views Hero

This module creates a view which implements the different displays of the BYU hero component.

## Usage

To use this module, you will need the views module. Then you will need to create a new view. With that view you will need to change the display style to "BYU Hero." Then in the settings of that display style you will be able to map the fields of your content type to the various parts of the BYU Hero Banner. There are five different display styles of the BYU Hero Banner component itself. Two of these styles have sub-styles. More on that below.

**Note**: The view will only be able to display one BYU Hero Banner.

### Notes on Fields

Your content type will need the following fields:

* Title (Plain Text)
* Intro Text (Plain Text, Long)
* Image (Image Field) - Only one value
* Video URL (Link Field) - Only one value
* Read More Link (Link Field)

## Banner Styles

* title-only - Only displays the title and image/video source. Used for headlines.
* video-hero - Gives support for embedded video.
* side-image - Displays an image on the left.
  * image-style-2 - An alternate side image view. Also can be used to embed videos.
* transparent-overlay - Puts the image in the background with a transparent block holding the other parts of the banner on the left.
  * byu-hero-right - Right aligns the transparent overlay.
* full-screen - Displays the image in the background, and stretches the transparent overlay to fit the width of the viewport.
  * light-image - Adjusts the formatting for bright-colored images.
  * dark-image - Adjusts the formatting for dark-colored images.

Demos for these banners are found here: https://cdn.byu.edu/byu-hero-banner/1.x.x/demo/index.html

### Ideal Image Sizes

* Title Only - Width: Viewport width, Height: 280px
* Video Hero, Transparent Overlay, Full Screen - Width: Viewport width, Height: 680px
* Side Image - Width: 570px, Height: 320px