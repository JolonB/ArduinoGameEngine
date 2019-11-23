# 8x8 LED Dot Matrix

The purpose of the LED dot matrix library is to provide an easy way to display
text or images in a game. For most games, it may be most reasonable to use it
to represent the game itself, as in, it is used as the display.

The library will allow a 2D array of boolean values to be passed into it which
will light up the cell if the value is true. The array can be larger than 8x8,
however, it is the developers responsibility to manage arrays *smaller* than
8x8. If an array is larger than 8x8, the developer will be expected to include
a cell in the array which represents the top-left corner of the display, and
the library will display the cells within a range of +7 in the x and y
directions.

The function header for drawing an image to the display is as follows:
`void draw_img(bool **cells, byte x=0, byte y=0);`