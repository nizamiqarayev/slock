/* user and group to drop privileges to */
static const char *user = "nizamiq"; /* replace nobody with your username */
static const char *group = "nobody"; /* don't touch this */

static const char *colorname[NUMCOLS] = {
    [BG] = "#000000",     /* background */
    [INIT] = "#3EA6AB",   /* after initialization */
    [INPUT] = "#3EA6AB",  /* during input */
    [FAILED] = "#5F2949", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*
 * Shapes:
 * 0: square
 * 1: circle
 */
static const int shape = 0;
/* size of square in px */
static const int shapesize = 35;
static const int shapegap = 15;

/* Background image path, should be available to the user above */
/* The path should be absolute like /home/username/Pictures/Wallpapers/Wallpaper.jpg */
static const char *background_image = "/home/nizamiq/Pictures/Wallpapers/Background_4.jpg";
